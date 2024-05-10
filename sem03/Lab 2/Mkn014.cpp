#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the size of First Array : ";
    int n; cin>>n;
    int arr1[n];
    cout<<"Enter the Elements of First Array : ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the size of Second Array : ";
    int m; cin>>m;
    int arr2[m];
    cout<<"Enter the Elements of Second Array : ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int total[n+m];
    cout<<"Marged Array : ";
    for(int i=0;i<n+m;i++){
        if(i<n){
        total[i]=arr1[i];
        }else{
        total[i]=arr2[i-n];}
        cout<<total[i]<<", ";
    }
}
