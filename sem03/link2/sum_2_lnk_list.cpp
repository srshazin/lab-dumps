#include "LinkedList.hpp"
#include <math.h>

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
    Node* id1 = list1.head;
    int list1_sum=0;
    for(int i =0; i<n;i++){
        list1_sum+=id1->data*pow(10,i);
        id1 = id1->next;
    }
    Node* id2 = list2.head;
    int list2_sum=0;
    for(int i =0; i<n;i++){
        list2_sum+=id2->data*pow(10,i);
        id2 = id2->next;
    }

    string sum = to_string(list1_sum+list2_sum);
    for(int i=sum.size(); i>=0; i--){
        cout<<sum[i]<<" ";
    }
    return 0;
}


