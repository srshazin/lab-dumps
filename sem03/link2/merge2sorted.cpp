#include "LinkedList.hpp"
#include <iostream>
using namespace std;

int main() {
    LinkedList list1, list2 , list;
    cout<<"Enter the size of 1st linkedList : ";
    int n,a; cin>>n;
    cout << "Enter " << n << " elements: ";
    for (int i = 1; i <= n; i++) {
        cin >> a;
        list1.insert(a);
    }
    cout<<"Enter the size of 2nd linkedList : ";
    int m; cin>>m;
    cout << "Enter " << m << " elements: ";
    for (int i = 1; i <= m; i++) {
        cin >> a;
        list2.insert(a);
    }
    list1.insert(1e6);list2.insert(1e6);

    Node* id1 = list1.head;
    Node* id2 = list2.head;
    for(int i=0;i<(n+m); i++){
        if(id1->data < id2->data){
            list.insert(id1->data);
            if(id1 != nullptr)id1 = id1->next;
        }else{
            list.insert(id2->data);
            if(id2 != nullptr)id2 = id2->next;
        }
    }
    cout<<"Merged : "; list.display();
    return 0;
}

