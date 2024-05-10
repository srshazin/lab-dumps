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
    Node* temp = list.head;
    int i =0;
    while(temp != nullptr){
        if(i == n/2 + n%2) cout<<endl;
        cout<<temp->data<<" ";
        temp = temp->next;
        i++;
    }
    return 0;
}

