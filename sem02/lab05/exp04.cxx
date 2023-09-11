

#include <iostream>
using namespace std;

class Employee{
private:
    string name;
    int id, salary;

public:
    void setName(string name) {
        name = name;
    }
    void setId(int i){
        id = i;
    }
    void setSalary(int s){
        salary = s;
    }
    // Getters
    string getName(){
        return name;
    }
    int getID(){
        return id;
    }
    int getSalary(){
        return salary;
    }
    // set salary 10%
    float increaseSalaryBy10(){
        float sal_ =  salary + salary * ((float)10/100);
        return sal_;

    }
};


int main() {
    Employee e;
    e.setName("Shazin");
    e.setId(101);
    e.setSalary(5000);
    cout <<"Name: " << e.getName() << endl;
    cout <<"Id: " << e.getID() << endl;
    cout <<"Salary: " << e.getSalary() << endl;
    cout <<"Salary after 10% increase: " << e.increaseSalaryBy10() << endl;
    int n;
    cout << "Number of years: ";
    cin >> n;
    float salary =  e.getSalary();
    for (int i = 0; i < n ;i++){

        salary += salary * (10.0/100);
    }
    cout << "Salary after " << n << " years: " << salary;
}
