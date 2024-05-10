#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout<<"Enter the size of the Array : ";
    int n,pos,element; cin>>n;
    int arr[n+1];
    cout<<"Enter the Elements of the Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Position you wanna delete : ";
    cin>>pos;
    for(int i=pos-1;i<n;i++){
    arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++){
    cout<<arr[i]<<" ";
    }
}
