#include<iostream>
using namespace std;

class Stack{
public:
    int arr[5];
    int idx = -1;

    void push(int data){
        if(idx > 4){
            cout<<"Overflow !!"<<endl;
            return;
        }
        arr[++idx] = data;
    }

    int pop(){
        if(idx<0){
            cout<<"Underflow !!"<<endl;
            return -1;
        }
        return arr[idx--];
    }

    void print(){
        for(int i=idx; i>=0; i--){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

};

int main() {
    Stack stack;
    int size , n;
    cout<<"Enter the size of the stack: ";
    cin>>size;
    cout<<"Enter the elements: ";
    for(int i=0;i<size;i++){
        cin>>n;
        stack.push(n);
    }
    stack.print();
    return 0;
}
