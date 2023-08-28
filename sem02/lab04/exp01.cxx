#include <iostream>
using namespace std;

class Animal{
    public:
         void make_sound(){
            cout << "Some blah blah sound..." << endl;
        }
};

class Dog:public Animal {
public:
    void make_sound(){
        cout << "Vough Vough...:D" << endl;
    }
};

int main(){

    Animal * c;
    Dog d;
    c = &d;
    c->make_sound() ;
}
