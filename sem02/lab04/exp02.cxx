#include <iostream>
using namespace std;

class Animal{
    public:
         virtual void make_sound()= 0;
};

class Dog:public Animal  {
public:
    void make_sound() override{
        cout << "Vough Vough...:D" << endl;
    }
};

class Raccon:public Animal {
public:
    void make_sound() {
        cout << "kkkkkkkkkkkkkkkkkkkkk" << endl;
    }
};

int main(){

    //Animal  anim;

    Dog dog;
    dog.make_sound();

    Animal * raccon;
    Raccon r;
    raccon = &r;
    raccon->make_sound();
}
