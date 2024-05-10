#include<iostream>
using namespace std;

int main(){
    int pos,element;
    int arr[10]= {64,89,75,69,85,72,102,145,164,175};
    cout<<"Array : "<<arr[0];
    for(int i=1;i<10;i++){
        cout<<", "<<arr[i];
    }
    cout<<endl<<"Enter the Position you wanna delete : ";
    cin>>pos;
    for(int i=pos-1;i<10;i++){
    arr[i]=arr[i+1];
    }
    for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
    }
}

