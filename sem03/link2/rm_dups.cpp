#include "LinkedList.hpp"
#include <unordered_set>

int main() {
    LinkedList list;
    cout<<"Enter the size of the linkedList : ";
    int n,a; cin>>n;
    cout << "Enter " << n << " elements: ";
    for (int i = 1; i <= n; i++) {
        cin >> a;
        list.insert(a);
    }
    unordered_set<int> seen;
    Node* current = list.head;
    seen.insert(current->data);

    while (current->next) {
        if (seen.find(current->next->data) != seen.end()) { // Duplicate found, remove it
            current->next = current->next->next;
        } else { // Add unique element to set
            seen.insert(current->next->data);
            current = current->next;
        }
    }
    cout<<"After removing duplicate : "; list.display();
    return 0;
}


