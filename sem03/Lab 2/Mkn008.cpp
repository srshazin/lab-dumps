#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the size of the Array : ";
    int n,pos,element; cin>>n;
    int arr[n+1]; // one extra size for insertion
    cout<<"Enter the Elements of the Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Position you wanna insert : ";
    cin>>pos;
    cout<<"Enter the Element ";
    cin>>element;
    for(int i=n;i>=pos;i--){
    arr[i]=arr[i-1];
    }
    arr[pos-1] = element;
    for(int i=0;i<=n;i++){
    cout<<arr[i]<<" ";
    }
}
