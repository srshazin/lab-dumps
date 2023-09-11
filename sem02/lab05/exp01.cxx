#include<iostream>
using namespace std;

class Rectangle{

private:
    float len, breadth;

public:
    void setLength(float l) {
        len = l;
    }
    void setBreadth(float b) {
        breadth = b;
    }
    float getLength() {
        return len;
    }
    float getBreadth(){
        return breadth;
    }
};

int main(){

    Rectangle r;
    r.setLength(10.6);
    r.setBreadth(4.0);
    cout << "Length: " << r.getLength() << endl;
    cout << "Breadth: " << r.getBreadth() << endl;
}
