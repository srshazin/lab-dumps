#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<char> stack , reverse;
    string st;
    cout<<"Enter a String : ";
    cin>>st;
    for(char ch : st){
        stack.push(ch);
    }

    while(!stack.empty()){
        cout<<stack.top()<<" ";
        reverse.push(stack.top());
        stack.pop();
    }cout<<endl;

    while(!reverse.empty()){
        cout<<reverse.top()<<" ";
        reverse.pop();
    }
    return 0;
}
