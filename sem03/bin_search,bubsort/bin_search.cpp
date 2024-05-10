#include<iostream>
using namespace std;

int main(){
    bool isFound = false;
    int arr[13]= {11,22,30,33,40,44,55,60,66,77,80,88,99}, pos=0 , target ;
    cout<<"Array : "<<arr[0];
    for(int i=1;i<13;i++){
        cout<<", "<<arr[i];
    }cout<<endl<<"Enter the element you want to search : ";
    cin>>target;
    int left = 0, right = 13-1;
    while(left<=right){
        int mid = (left + right)/2;
        if(arr[mid]==target){
            isFound = true;
            pos = mid+1;
            break;
        }else if(arr[mid]<target){
            left = mid+1;
        }else{
            right = mid-1;
        }
    }
    if(isFound){
        cout<<"Found at "<<pos<<"th Position"<<endl;
    }else{
        cout<<"Not Found";
    }
}
