#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void sortQueue(queue<int> &q){
    stack<int> sortedList;

    while (!q.empty()) {
        int current = q.front(); q.pop();

        while (!sortedList.empty() && sortedList.top() < current) {
            q.push(sortedList.top());
            sortedList.pop();
        }
        sortedList.push(current);
    }

    while (!sortedList.empty()) {
        q.push(sortedList.top());
        sortedList.pop();
    }
}

int main() {
    queue<int> list;
    cout<<"Enter the size of the Queue : ";
    int n,a; cin>>n;
    cout << "Enter " << n << " elements: ";
    for (int i = 1; i <= n; i++) {
        cin >> a;
        list.push(a);
    }

    sortQueue(list);

    while(!list.empty()){
        cout<<list.front()<<" ";
        list.pop();
    }

    return 0;
}
