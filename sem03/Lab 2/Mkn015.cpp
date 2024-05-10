#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the Array : ";
    int n; cin>>n; int arr[n];
    cout<<"Enter the Elements of the Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];}
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";}
}
