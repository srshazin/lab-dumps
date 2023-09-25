#include <iostream>
#include <cmath>
using namespace std;

class Point{

private:
    float p1[2], p2[2];

public:
    Point(float p_1[], float p_2[]){
        p1[0] = p_1[0];
        p1[1] = p_1[1];
        p2[0] = p_2[0];
        p2[1] = p_2[1];

    }

    float getDistance(){
        float dist =  sqrt(pow((p2[0] - p1[0]), 2) + pow((p2[1] - p1[1]), 2));
        return dist;
    }

};

int main(){

    float pt1[2] = {10, 15};
    float pt2[2] = {12, 16};
    Point p1(pt1, pt2);
    Point p2 = p1;
    cout << p2.getDistance() << endl;
}
