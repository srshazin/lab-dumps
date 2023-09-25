#include<iostream>
#include<cmath>
using namespace std;

class point{
private:
    float x,y;

public:
    point (int a, int b)
    {
       x = a;
       y = b;
    }
    cpoint (const point &p1)
    {
       x = p1.x;
       y = p1.y;
    }
    float get_X()
    {
        return x;
    }
    float get_Y()
    {
        return y;
    }
};
int main ()
{
    point p1(10 , 15);
    point p2 = p1;
    point p3(12 , 16);
    float dis = sqrt(pow((p3.get_X() - p2.get_X()) , 2) + pow((p3.get_Y() - p2.get_Y()) , 2));
    cout<<"Distance = "<<dis<<" Unit(s)"<<endl;
}
