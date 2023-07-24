#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    int n;
    float sum=0, thres;
    cout << "How many days to analyze: ";

    cin >> n;
    //array to hold
    vector<float> v;
    for (int i=0; i < n; i++){
        //hold and store
        float tmp;
        cout << "Enter temperature for day " << i+1 << ": ";
        cin >> tmp;
        v.push_back(tmp);
        sum += tmp;
    }
    cout << "Threshold Temp: ";
    cin >> thres;
    cout << "Temperature Report" << endl;
    cout << "===============================" << endl;
    cout << "Average temperature : " << sum/n <<endl;
    float max = *max_element(v.begin(), v.end());
    float min = *min_element(v.begin(), v.end());
    cout << "Highest temperature: " << max <<endl ;
    cout << "Lowest temperature: " << min <<endl;
    cout << "Days with temperature above " << thres << ": ";
    for (int i=0; i< n; i++){
        if (v.at(i) > thres) {

             cout << "Day " << i + 1 << " ";
            }
    }
    cout << "\nDays with temperature below " << thres << ": ";
    for (int i=0; i< n; i++){
        if (v.at(i) < thres) {

             cout << "Day " << i + 1 << " ";
            }
    }
    cout << endl;


}
