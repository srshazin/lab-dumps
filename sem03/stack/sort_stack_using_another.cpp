#include<iostream>
#include<stack>
using namespace std;

stack<int> sortStack(stack<int> &s){
      stack<int> Sorted;
      while(!s.empty()){
            int curr = s.top(); s.pop();
            while(!Sorted.empty() && Sorted.top()<curr){
                s.push(Sorted.top());
                Sorted.pop();
            } Sorted.push(curr);
      }

      return Sorted;
}

int main() {
    stack<int> list;
    cout<<"Enter the size of the Stack : ";
    int n,a; cin>>n;
    cout << "Enter " << n << " elements: ";
    for (int i = 1; i <= n; i++) {
        cin >> a;
        list.push(a);
    }

    list = sortStack(list);
    cout<<"Sorted: ";

    while(!list.empty()){
        cout<<list.top()<<" ";
        list.pop();
    }

    return 0;
}
