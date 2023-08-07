#include <iostream>

using namespace std;

class Employee{
public:
    void printInfo(string name, int id, int salary){
        cout << "Name: " << name <<endl;
        cout << "Employee ID: " << id << endl;
        cout << "Salary: $" << salary << endl;
        cout << endl;
    }
};

class Manager: public Employee {
public:
    void info(string name, int id, int salary){
        printInfo(name, id, salary);
    }
};

class Engineer: public Employee {
public:
    void info(string name, int id, int salary){
        printInfo(name, id, salary);
    }
};

class Technitian: public Employee {
public:
    void info(string name, int id, int salary){
        printInfo(name, id, salary);
    }
};

int main(void){

    Manager m1;
    m1.info("John Doe", 101, 6500);
    Engineer e1;
    e1.info("Jane Smith", 102, 6000);
    Technitian t1;
    t1.info("Mike Johnson", 103, 4500);

}
