#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout<<"Enter the size of the Array : ";
    int n; cin>>n;
    int arr[n];
    cout<<"Enter the Elements of the Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector <int> even , odd;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even.push_back(arr[i]);
        }else{
            odd.push_back(arr[i]);
        }
    }
    cout<<"Even Elements : ";
    for(auto& i :even){
        cout<<i<<" ";
    }
    cout<<"\nOdd Elements : ";
    for(auto& i :odd){
        cout<<i<<" ";
    }
}
