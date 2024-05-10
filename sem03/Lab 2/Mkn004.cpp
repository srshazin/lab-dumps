#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    cout<<"Enter the size of the Array : ";
    int n; cin>>n; int arr[n];
    cout<<"Enter the Elements of the Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }sort(arr, arr+n);
    cout<<"Maximum Element "<<arr[0]<<endl<<"Minimum Element "<<arr[n-1]<<endl;
}
