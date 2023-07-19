#include <iostream>
using namespace std;
void printAst(int n) {
    for (int i =0; i < n; i++){
        cout << "*";
    }
}

using namespace std;
int main() {
    int n;
    cin >> n;
    //Rectangle
    for (int i =0; i< n; i++){
        printAst(6);
        cout << endl;
    }
    cout << endl << endl;
    // Triangle
    for (int i =0 ; i < n; i++){
        printAst(i+1);
        cout << endl;
    }
}
