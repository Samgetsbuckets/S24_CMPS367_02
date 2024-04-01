#include <iostream>
#include <string>
#include <stack>
#include <cmath>

using namespace std;

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

float performOperation(float operand1, float operand2, char op) {
    switch(op) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            if (operand2 != 0)
                return operand1 / operand2;
            else {
                cout << "Error: Division by zero!" << endl;
                exit(1);
            }
        default:
            cout << "Error: Invalid operator!" << endl;
            exit(1);
    }
}

float evaluateExpression(const string& expr) {
    stack<float> operands;
    stack<char> operators;

    for (size_t i = 0; i < expr.length(); ++i) {
        if (isdigit(expr[i]) || expr[i] == '.') {
            string numStr;
            while (i < expr.length() && (isdigit(expr[i]) || expr[i] == '.')) {
                numStr += expr[i++];
            }
            i--;
            float num = stof(numStr);
            operands.push(num);
        } else if (expr[i] == '(') {
            operators.push(expr[i]);
        } else if (expr[i] == ')') {
            while (!operators.empty() && operators.top() != '(') {
                char op = operators.top();
                operators.pop();
                float operand2 = operands.top();
                operands.pop();
                float operand1 = operands.top();
                operands.pop();
                operands.push(performOperation(operand1, operand2, op));
            }
            if (!operators.empty()) {
                operators.pop();
            } else {
                cout << "Error: Mismatched parentheses!" << endl;
                exit(1);
            }
        } else if (isOperator(expr[i])) {
            while (!operators.empty() && isOperator(operators.top()) &&
                   ((expr[i] != '*' && expr[i] != '/') || (operators.top() != '+' && operators.top() != '-'))) {
                char op = operators.top();
                operators.pop();
                float operand2 = operands.top();
                operands.pop();
                float operand1 = operands.top();
                operands.pop();
                operands.push(performOperation(operand1, operand2, op));
            }
            operators.push(expr[i]);
        }
    }

    while (!operators.empty()) {
        char op = operators.top();
        operators.pop();
        float operand2 = operands.top();
        operands.pop();
        float operand1 = operands.top();
        operands.pop();
        operands.push(performOperation(operand1, operand2, op));
    }

    return operands.top();
}

int main() {
    string expr;
    cout << "Enter the expression to evaluate: ";
    getline(cin, expr);
    try {
        float result = evaluateExpression(expr);
        cout << "Result: " << result << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}

