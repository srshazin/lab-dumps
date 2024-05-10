#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverse(queue<int> &s){
    stack<int> reversedList;
    while(!s.empty()){
        reversedList.push(s.front());
        s.pop();
    }

    while(!reversedList.empty()){
        cout<<reversedList.top()<<" ";
        s.push(reversedList.top());
        reversedList.pop();
    }
}
int main() {
    queue<int> list;
    cout<<"Enter the size of the Queue : ";
    int n,a; cin>>n;
    cout << "Enter " << n << " elements: ";
    for (int i = 1; i <= n; i++) {
        cin >> a;
        list.push(a);
    }
    cout<<"Reversed: ";
    reverse(list);

    return 0;
}
