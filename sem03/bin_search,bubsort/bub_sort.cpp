#include<iostream>
using namespace std;

int main(){
    int pos,element;
    int arr[8]= {32,51,27,85,66,23,13,57}, pass = 0;
    cout<<"Array : "<<arr[0];
    for(int i=1;i<8;i++){
        cout<<", "<<arr[i];
    }for(int j=0; j<8;j++){
    for(int i=1;i<8-pass;i++){
        if(arr[i]<arr[i-1]){
            int temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
        }
    }pass++;
    }cout<<endl<<"Ascending :";
    for(int i=0; i<8;i++){
        cout<<arr[i]<<", ";
    }cout<<endl<<"Descending :";
    for(int i=7; i>=0;i--){
        cout<<arr[i]<<", ";
    }
}
