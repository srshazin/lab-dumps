#include<iostream>
using namespace std;

class BankAccount{
private:
    string accountNumber, accountHolderName;
    int accountBalance;

public:
    //Setters

    void setaccountNumber(string ac_num){
        accountNumber = ac_num;
    }
    string getaccountNumber(){
        return accountNumber;
    }
    void setaccountHolderName(string name){
        accountHolderName = name;

    }
    string getaccountHolderName(){
        return accountHolderName;
    }
    void setaccountBalance(int ac_b){
        accountBalance = ac_b;
    }

    int getaccountBalance(){
        return accountBalance;
    }
    // deposit

    void deposit(int dep_am){
        accountBalance += dep_am;

    }
    void withdraw(int with_am){
        accountBalance -= with_am;
    }
};


int main() {

    BankAccount ba;
    ba.setaccountNumber("123456789");
    ba.setaccountHolderName("Shazin");
    ba.setaccountBalance(5000);

    cout << "Account Details" <<endl;
    cout << "Number: " << ba.getaccountNumber() << endl;
    cout << "Name: " << ba.getaccountHolderName() << endl;
    cout << "Balance: " << ba.getaccountBalance() << endl;
    ba.deposit(2000);
    // Printing balance after deposit
    cout << "Balance after deposit: " << ba.getaccountBalance() << endl;
    // withdraw 500
    ba.withdraw(500);
    cout << "Balance after withdraw: " << ba.getaccountBalance() << endl;

    cout << "How many times you want to deposit? ";
    int n;
    cin >> n;
    float total_ba = ba.getaccountBalance();
    for (int i =0; i < n ; i++){
        float dep;
        cout << "Deposit amount: ";
        cin >> dep;
        total_ba += dep - (dep * (2.0/100));

    }
    cout << "Your current total after deposit is: " <<total_ba <<  endl;
}
