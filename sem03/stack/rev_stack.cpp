#include<iostream>
#include<stack>
using namespace std;

stack<int> reverseStack(stack<int> &s){
    stack<int> reversed;

    while(!s.empty()){
        reversed.push(s.top());
        s.pop();
    }

    return reversed;
}

int main() {
    stack<int> list;
    cout<<"Enter the size of the Stack : ";
    int n,a; cin>>n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i<n; i++) {
        cin >> a;
        list.push(a);
    }
    list = reverseStack(list);
    cout<<"Reversed : ";

    while(!list.empty()){
        cout<<list.top()<<" ";
        list.pop();
    }

    return 0;
}

