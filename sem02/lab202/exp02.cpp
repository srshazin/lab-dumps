#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include<map>
using namespace std;

int main() {
    vector<map<string, string>> v;
    int n;
    cout << "Enter how many stock you want to add: ";
    cin >> n;
    for (int i =0; i < n; i++){
        string name, price, q;
        map<string, string> tmp;
        cout << "Stock " << i+1 << " name: ";
        cin >> name;
        cout << "Stock " << i+1 << " price: ";
        cin >> price;
        cout << "Stock " << i+1 << " quantity: ";
        cin >> q;

        tmp["name"]  = name;
        tmp["price"] = price;
        tmp["q"] = q;
        v.push_back(tmp);


            }
            //cout << v.size() <<endl;
        cout << "Stock Report" << endl;
    cout << "==========================" << endl;
        //Do operations
        int sum = 0;
        int x = 1;
        for (auto i: v){
            sum+= stoi(i["q"]) * stoi(i["price"]);
            cout << "Stock " << x << ": "  << i["name"] << ", Quantity: " << i["q"] << ", Price: $" << i["price"] << endl;
            x++;
        }

        cout << "Total portfolio value " << sum ;
}
