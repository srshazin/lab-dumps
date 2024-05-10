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

    int maxM =list.front();
    while(!list.empty()){
        maxM = max(maxM,list.front());
        list.pop();
    } cout<<"Maximum: "<<maxM;

    return 0;
}

