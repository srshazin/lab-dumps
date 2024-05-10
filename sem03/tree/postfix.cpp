#include "binaryTree.h";
#include <stack>
#include <string>
using namespace std;

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int evaluate(char op, int left, int right) {
    switch (op) {
        case '+': return left + right;
        case '-': return left - right;
        case '*': return left * right;
        case '/': return left / right;
        default: return 0;
    }
}

int evaluatePostfix(string postfix) {
    stack<int> st;

    for (char c : postfix) {
        if (!isOperator(c)) {
            st.push(c - '0'); // Convert character to integer
        } else {
            int rightOperand = st.top();
            st.pop();
            int leftOperand = st.top();
            st.pop();

            int result = evaluate(c, leftOperand, rightOperand);
            st.push(result);
        }
    }

    return st.top();
}

int main() {
    cout << "Enter postfix expression: ";
    string postfix; cin >> postfix;

    int result = evaluatePostfix(postfix);

    cout << "Result: " << result << endl;

    return 0;
}

