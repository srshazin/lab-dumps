#include "LinkedList.hpp"

Node* FindMid(Node* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        Node* slow = head;
        Node* fast = head->next;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

Node* MergeSort(Node* head){
    if(head == nullptr || head->next == nullptr){
        return head;
    }
    Node* mid = FindMid(head);
    Node* rightHead = mid->next;
    mid->next = nullptr;

    Node* left = MergeSort(head);
    Node* right = MergeSort(rightHead);

    Node* sortedList = new Node(0);
    Node* tail = sortedList;

    while(left != nullptr && right != nullptr){
        if(left->data < right->data){
                tail->next = left;
                left = left->next;
        } else {
                tail->next = right;
                right = right->next;
        }
        tail = tail->next;
    }
    tail->next = left ? left : right;
    return sortedList->next;
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
    list.head = MergeSort(list.head);
    cout << "Sorted list: ";
    list.display();
}
