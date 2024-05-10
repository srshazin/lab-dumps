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
    cout<<"As String : ";
    Node* temp = list.head;
    while(temp != nullptr){
        cout<<to_string(temp->data)<<" ";
        temp = temp->next;
    }

    return 0;
}
