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

    int size =0;
    while(!list.empty()){
        size++;
        list.pop();
    } cout<<"Queue size: "<<size;

    return 0;
}
