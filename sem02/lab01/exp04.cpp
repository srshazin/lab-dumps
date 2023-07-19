#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "How many turns: ";
    cin >> n;
    int sum;
    int a = 0;
    int b = 1;
    int c = a+b;
    cout << 1  << "\t";
    for (int i=0; i< n-1; i++){
        cout << c<< "\t";
        sum += c;
        a = b;
        b = c;
        c = a+b;
    }
    cout << endl;
    cout << "Sum of series is : " << sum +1;

}
