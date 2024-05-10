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
    cout<<"After Deleting last Node : ";
    Node* temp = list.head; n-=2;
    while(n--) temp = temp->next;
    temp->next = NULL;
    list.display();
    return 0;
}
