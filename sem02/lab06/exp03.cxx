#include <iostream>

using namespace std;

class BankAccount{
private:
    int accountNumber, balance;
public:
    BankAccount(){
        balance = 0;
    }
    BankAccount(int acNum, int bal){
        balance  = bal;
        accountNumber =  acNum;
    }
    int Deposit(int amount){
        balance += amount;
        return balance;
    }
    int withdraw(int a){
        balance -= a;
        return balance;
    }

    int getBal(){return balance;}

};

int main(){

    BankAccount ba1, ba2(1223, 500);
    cout << "Initail balance of AC1: $" << ba1.getBal() << endl;
    cout <<"Balance after depositing $100 in AC1: " << ba1.Deposit(100) <<endl;
    cout << "Balance after withdrawing $50 from AC1: " << ba1.withdraw(50) <<endl;

     cout << "================================" <<endl;
     cout << "Initail balance of AC2: $" << ba2.getBal() << endl;
     cout <<"Balance after depositing $280 in AC2: " << ba2.Deposit(280) <<endl;
    cout << "Balance after withdrawing $370 from AC2: " << ba2.withdraw(370) <<endl;

}
