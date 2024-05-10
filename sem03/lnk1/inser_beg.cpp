#include "LinkedList.hpp"

void LinkedList :: insertAtHeader(int value){
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else{
            Node* temp = head;
            head = newNode;
            newNode->next = temp;
        }
        size++;
}

int main() {
    LinkedList list;
    cout<<"Enter the size of the linkedList : ";
    int n,a; cin>>n;
    cout << "Enter " << n << " elements: ";
    for (int i = 1; i <= n; i++) {
        cin >> a;
        list.insert(a);
    }
    list.display();
    cout << "Enter the element you want to insert at the beginning: ";
    cin>>a; list.insertAtHeader(a);
    list.display();

    return 0;
}
