#include<iostream>
using namespace std;

int main(){
    int pos,element;
    int arr[10+1]= {64,89,75,69,85,72,102,145,164,175}; // one extra for insertion
    cout<<"Array : "<<arr[0];
    for(int i=1;i<10;i++){
        cout<<", "<<arr[i];
    }
    cout<<endl<<"Enter the Position you wanna insert : ";
    cin>>pos;
    cout<<"Enter the Element ";
    cin>>element;
    for(int i=10;i>=pos;i--){
    arr[i]=arr[i-1];
    }
    arr[pos-1] = element;
    for(int i=0;i<=10;i++){
    cout<<arr[i]<<" ";
    }
}

