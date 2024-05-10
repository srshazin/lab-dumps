#include<iostream>
using namespace std;

class queue{
    public:
        int *arr;
        int front;
        int size;

        queue(int n){
            arr = new int[n];
            front = 0;
            size = 0;
        }

        void insert(int val){
            arr[size++] = val;
        }

        void display(){
            for(int i=front; i<size; i++){
                cout<<arr[i]<<" ";
            }
        }

        bool isEmpty(){
            return size;
        }
};

int main() {
    cout<<"Enter the size of the Queue : ";
    int n,a; cin>>n;
    queue list(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i<n; i++) {
        cin >> a;
        list.insert(a);
    }

    list.display();

    return 0;
}
