#include "LinkedList.hpp"

int main() {
    LinkedList list;
    cout<<"Enter the size of the linkedList : ";
    int n,a; cin>>n;
    cout << "Enter " << n << " elements: ";
    for (int i = 1; i <= n; i++) {
        cin >> a;
        list.insert(a);
    }
    cout<<"Even elements : ";
    Node* temp = list.head;
    while(temp != nullptr){
        if(temp->data%2 == 0) cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}


