#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> list;
    cout<<"Enter the size of the Queue : ";
    int n,a; cin>>n;
    cout << "Enter " << n << " elements: ";
    for (int i = 1; i <= n; i++) {
        cin >> a;
        list.push(a);
    }

    int minM =list.front();
    while(!list.empty()){
        minM = min(minM,list.front());
        list.pop();
    } cout<<"Minimum: "<<minM;

    return 0;
}

