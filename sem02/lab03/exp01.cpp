#include<iostream>
#include <string>
using  namespace std;

class Vehicle{
    public:
        void printInfo(int y, string brand, string model){
            cout << "Year: " << y << endl;
            cout << "Brand " << brand  << endl;
            cout << "Model: " << model << endl;
        }
    };
    class Car: public Vehicle{
        public:
            void info(int y, string brand, string model, string fuel_eff){
                cout << "Car informations: " <<endl;
                printInfo(y, brand, model);
                cout << "Fuel Efficiency: " << fuel_eff <<endl;
            }
    };
    class Motorbike: public Vehicle{
        public:
            void info(int y, string brand, string model, string fuel_eff){
                cout << "Motorbike Information" << endl;
                printInfo(y, brand, model);
                cout << "Fuel Efficiency: " << fuel_eff <<endl;
            }
    };
    class BiCycle: public Vehicle{
        public:
            void info(int y, string brand, string model){
                cout << "Bi Cycle Information" << endl;
                printInfo(y, brand, model);

            }
    };

int main(void){

    Car car1;
    car1.info(2023, "Toyota", "Cumrey", "30.5 miles/gallon");
    cout << endl;
    Motorbike mb1;
    mb1.info(2023, "Honda", "CBR 600PR", "10.2 miles/gallon");
    cout << endl;
    BiCycle bcycle1;
    bcycle1.info(2023, "Trek", "Mountain Bike");


}
