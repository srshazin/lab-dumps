#include "LinkedList.hpp"

void LinkedList :: insertAtMiddle(int pos,int value){
        Node* newNode = new Node(value);
        Node* mid = head;
        while(pos-1){
            mid = mid->next;
            pos--;
        }newNode->next = mid->next;
            mid->next = newNode;
            size++;
}

int main() {
    LinkedList list;
    cout<<"Enter the size of the linkedList : ";
    int n,a,pos; cin>>n;
    cout << "Enter " << n << " elements: ";
    for (int i = 1; i <= n; i++) {
        cin >> a;
        list.insert(a);
    }
    cout << "Enter the position where you want to insert: ";
    cin >> pos;
    if(pos>list.size){
        cout<<"Invalid Position !!";
        return 0;
    }cout << "Enter the element you want to insert at position " << pos << ": ";

    cin>>a; list.insertAtMiddle(pos,a);
    list.display();

    return 0;
}

