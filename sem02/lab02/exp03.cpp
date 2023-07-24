#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include<map>
using namespace std;

int main() {
    vector<map<string, string>> v;
    int n;
    cout << "Enter how many contacts you want to add: ";
    cin >> n;
    for (int i =0; i < n; i++){
        string name, phone, email;
        map<string, string> tmp;
        cout << "Contact " << i+1 << " Name: ";
        cin >> name;
        cout << "Contact " << i+1 << " Phone: ";
        cin >> phone;
        cout << "Contact  " << i+1 << " Email: ";
        cin >> email;

        tmp["name"]  = name;
        tmp["email"] = email;
        tmp["phone"] = phone;
        v.push_back(tmp);


            }

            cout << "Enter a name to search: ";
            string target;

            cin >> target;
            bool found = false;
            string fname  = "";
            string fphn = "";
            string fem = "";
            for (auto i:v){
                if (i["name"] == target){
                    found = true;
                    fname = i["name"];
                    fphn = i["phone"];
                    fem = i["email"];
                    break;
                }
            }
            cout << "Search summary" <<endl;
            cout << "==========================" << endl;
            if (found){
                cout << "Contact Found!";
                cout << "Name: " << fphn << endl;
                cout << "Email: " << fem << endl;
                 cout << "Phone: " << fphn << endl;
            } else {
                cout << "No contact found!";
            }
}
