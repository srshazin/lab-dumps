#include "LinkedList.hpp"

int main(){
    LinkedList list;
    cout<<"Enter the size of the linkedList : ";
    int n,a; cin>>n;
    cout << "Enter " << n << " elements: ";
    for (int i = 1; i <= n; i++) {
        cin >> a;
        list.insert(a);
    }

    int cnt=0;
    for(Node* ptr = list.head; ptr!= nullptr; ptr = ptr->next){
            cout<<ptr->data<<" ";
        cnt++;
    }

    cout<<endl<<"Total number of Node "<<cnt;
}

