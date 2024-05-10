#include "LinkedList.hpp"

int main() {
    LinkedList list;
    cout << "Enter the size of the linkedList : ";
    int n, a,pos; cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 1; i <= n; i++) {
        cin >> a;
        list.insert(a);
    }
    cout << "Enter the position where you want to Delete: ";
    cin >> pos;
    if(pos>list.size){
        cout<<"Invalid Position !!";
        return 0;
    } pos-=2;
    Node* temp = list.head;
    while(pos--) temp = temp->next;
        temp->next = temp->next->next;
    cout << "After Deletion : ";
    list.display();
    return 0;
}
