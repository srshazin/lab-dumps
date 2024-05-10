#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout<<"Enter the size of the Array : ";
    int n; cin>>n;
    int arr[n], copied[n];
    cout<<"Enter the Elements of the Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        copied[i]=arr[i];
    }
    cout<<"Copied Array :";
    for(int i=0;i<n;i++){
        cout<<copied[i]<<", ";
    }
}
