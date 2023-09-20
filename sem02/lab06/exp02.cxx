#include<iostream>
using namespace std;

class Product{
private:
    string name;
    float price;
    int id;
public:
    Product(){
        name = "N/A";
        price = 0.0;
        id = 0;
    }
    // Param Constr
    Product(string n ,  float p, int i){
        name = n;
        price = p;
        id = i;
    }

    string getName(){return name;}
    float getPrice(){return price;}
    int getID(){return id;}

    void setName(string n){name = n;}
    void setPrice(float p){price = p;}
    void setName(int i){id = i;}

    void printDetails(){
        cout << "Product Name: " << name << endl;
        cout << "Product Price: " << price << endl;
        cout << "Product ID: " << id << endl;
    }

};

int main(void){

        Product p1;
        Product p2("Oil", 45.00, 75845);
        p1.printDetails();

        cout << "================================" << endl;
        p2.printDetails();
    }
