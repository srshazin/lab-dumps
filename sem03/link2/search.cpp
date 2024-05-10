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
    Node* temp = list.head; int count = 1;

    cout << "Enter the element you want to search: ";
    cin>>a;
    while(temp->next != nullptr){
        if(temp->data == a){
            cout<<"Found "<<a<<" at "<<count<<" Position"<<endl;
            break;
        }count++; temp = temp->next;
    }

    return 0;
}
