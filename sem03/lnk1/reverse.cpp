#include "LinkedList.hpp"

void LinkedList :: reverse() {
        if (head == nullptr || head->next == nullptr) {
            return;
        }

        Node* prev = nullptr;
        Node* current = head;
        Node* nextNode = nullptr;
        while (current != nullptr) {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        head = prev;
}

int main() {
    LinkedList list;
    cout << "Enter the size of the linkedList : ";
    int n, a; cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 1; i <= n; i++) {
        cin >> a;
        list.insert(a);
    }
    cout << "Original list: ";
    list.display();

    list.reverse();

    cout << "Reversed list: ";
    list.display();

    return 0;
}
