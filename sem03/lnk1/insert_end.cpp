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
    list.display();
    cout << "Enter the element you want to insert at the End: ";
    cin>>a; list.insert(a);
    list.display();

    return 0;
}
