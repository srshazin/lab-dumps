#include<iostream>
using namespace std;
int frq[1000000];
int main(){
    cout<<"Enter the size of the Array : ";
    int n; cin>>n;
    int arr[n];
    cout<<"Enter the Elements of the Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        frq[arr[i]]++;
    }
    cout<<"After Deleting Duplicate element :";
    for(int i=0;i<n;i++){
    if(frq[arr[i]]>1){
    arr[i]=-1; // -1 to declare its deleted
    }else{
    cout<<arr[i]<<", ";}
    }
}
