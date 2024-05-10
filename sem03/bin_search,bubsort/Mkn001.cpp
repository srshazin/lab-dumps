#include<iostream>
using namespace std;

int main(){
    int arr[]= {2,3,4,5,6,7};
    for(int i = 0 ; i<sizeof(arr)/sizeof(arr[0]); i++){
        cout<<"Traversing "<<i+1<<"th element : "<<arr[i]<<endl;
    }
}
