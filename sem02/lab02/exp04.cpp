
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include<map>
using namespace std;

int main() {
    vector<map<string, string>> v;
    int n;
    cout << "Student Num: ";
    cin >> n;
    for (int i =0; i < n; i++){
        string name, att1, att2, att3;
        map<string, string> tmp;
        cout << "Enter student's name " << i+1 <<": ";
        cin >> name;
        cout << "Day 1: ";
        cin >> att1;
        cout << "Day 2: ";
        cin >> att2;
        cout << "Day 3: " ;
        cin >> att3;


        tmp["name"]  = name;
        tmp["a1"] = att1;
        tmp["a2"] = att2;
        tmp["a3"] = att3;
        v.push_back(tmp);


            }
        cout << "Attendence Report" << endl;
    cout << "==========================" << endl;
    cout << "Name |  Report" << endl;
    for (auto i:v){
        cout << i["name"] << " | " << i["a1"] << "  " << i["a2"] << "  " << i["a3"] << endl;
    }
}
