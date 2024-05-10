#include <iostream>
using namespace std;

class TwoStacks {
private:
    int* arr;
    int top1;
    int top2;
    int size;

public:
    TwoStacks(int n) : arr(new int[n]), top1(-1), top2(n), size(n) {}

    void push1(int value) {
        if(top1 < top2 - 1){
            arr[++top1] = value;
        }else{
            cout << "Stack 1 Overflow\n";
        }
    }

    void push2(int value) {
        if(top1 < top2 - 1){
            arr[--top2] = value;
        }else{
            cout << "Stack 2 Overflow\n";
        }
    }

    int pop1() {
        return (top1 >= 0) ? arr[top1--] : (cout << "Stack 1 Underflow\n", -1);
    }

    int pop2() {
        return (top2 < size) ? arr[top2++] : (cout << "Stack 2 Underflow\n", -1);
    }
};

int main() {
    TwoStacks ts(10);

    ts.push1(1); ts.push1(2);
    ts.push2(4); ts.push2(5);

    cout << "Popped from Stack 1: " << ts.pop1() << endl;
    cout << "Popped from Stack 2: " << ts.pop2() << endl;

    return 0;
}
