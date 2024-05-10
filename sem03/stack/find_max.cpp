#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> list;
    cout<<"Enter the size of the Stack : ";
    int n,a; cin>>n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i<n; i++) {
        cin >> a;
        list.push(a);
    }

    int maxM = list.top();
    while(!list.empty()){
        maxM = max(maxM, list.top());
        list.pop();
    }cout<<"Maximum element: "<<maxM;

    return 0;
}
