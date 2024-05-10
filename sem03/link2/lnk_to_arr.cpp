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
    int arr[n]; Node* temp = list.head;
    cout<<"As Array : ";
    for(int i=0;i<n;i++){
        arr[i] = temp->data;
        temp = temp->next;
    }

    list.display();
    return 0;
}
