#include<iostream>
using namespace std;

int main(){
    bool isFound = false;
    int arr[13]= {11,22,30,33,40,44,55,60,66,77,80,88,99}, pos=0;
    for(int i=0; i<13; i++){
        if(arr[i]==99){
            isFound = true;
            pos=i+1;
            break;
        }
    }
    if(isFound){
        cout<<"Found at "<<pos<<"th Position"<<endl;
    }else{
        cout<<"Not Found";
    }
}
