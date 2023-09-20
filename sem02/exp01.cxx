#include<iostream>
using namespace std;

class Rectangle{;
private:
    float height, width;
public:
    Rectangle(){
        height = 0;
        width = 0;
    }
    Rectangle(float h, float w){
        height = h; width = w;
    }
    void setHeight(float h){
        height =  h;
    }
     void setWidth(float w){
        width =  w;
    }
    float calculateArea(){
        return height * width;
    }


};


int main(void){
    Rectangle r1;
    Rectangle r2(10, 2);
    cout << "The area of the default constructor: " << r1.calculateArea() << endl;
    cout << "The area of the parameterized constructor: " << r2.calculateArea() << endl;
}
