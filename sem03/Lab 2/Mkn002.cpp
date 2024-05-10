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
    vector <int> pos , neg;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            pos.push_back(arr[i]);
        }else{
            neg.push_back(arr[i]);
        }
    }
    cout<<"Positive Elements : ";
    for(auto& i :pos){
        cout<<i<<" ";
    }
    cout<<"\nNegative Elements : ";
    for(auto& i :neg){
        cout<<i<<" ";
    }
}
