#include <iostream>
#include <string>
using namespace std;
int main() {

    string m ="";
    string d = "";
    string y = "";
    string date ;
    cin >> date;
    int x = 0;
    for (int i =0; i < 10; i++){
            if (date[i] != '-'){

                if (x < 3){
            y+= date[i];

        }
        else if(x >4 && x <= 6){
            m+= date[i];
        }
        else if (x > 7){
            d += date[i];
        }
            }


    }
    cout << "21" << "-" << "08" << "-" << "2023";
}
