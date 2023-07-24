#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> splitStr(string str, char token){
	
	string tmpStr = "";
	vector<string> v;
	for (int i =0; i < str.length(); i++){
		if (str[i] != token){
			tmpStr += str[i];
		}
		else if(str[i] == token) {
			v.push_back(tmpStr);
			tmpStr = "";
		}
		if (i == str.length()-1){
			v.push_back(tmpStr);
		}
		
	}
	
	return v;
}


int main() {
    //Program written by SHAZIN , Don't Forget to change your code before submission
    string m ="";
    string d = "";
    string y = "";
    string date ;
    cin >> date;
    vector<string> sec = splitStr(date, '-');
    cout << sec.at(2) << "-" << sec.at(1) << "-" << sec.at(0) <<endl;
}
