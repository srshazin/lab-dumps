#include <bits/stdc++.h>
using namespace std;

void deleteMid(stack<int> &s){
    queue<int> temp;
    int mid = s.size()/2;

    while(!s.empty()){
        if(!mid){
            s.pop(); //delete mid
        }
        temp.push(s.top());
        s.pop();
        mid--;
    }

    while(!temp.empty()){
        s.push(temp.front());
        temp.pop();
    }
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

    deleteMid(list); cout<<"After Deletion: ";
    while(!list.empty()){
        cout<<list.top()<<" ";
        list.pop();
    }

    return 0;
}
