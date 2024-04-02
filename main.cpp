#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

float calculate(float num1, float num2, char op) {
    switch (op) {
        case '+':
            cout << "You have entered an addition equation." << endl;
            return num1 + num2;
        case '-':
            cout << "You have entered a subtraction equation." << endl;
            return num1 - num2;
        case '*':
            cout << "You have entered a multiplication equation." << endl;
            return num1 * num2;
        case '/':
            cout << "You have entered a division equation." << endl;
            return num1 / num2;
        case '^':
            cout << "You have entered an exponential equation." << endl;
            return pow(num1, num2);
        default:
            return 0.0;
    }
}

float solveOperation(string& expression, int& index) {
    float result = 0.0;
    char op = ' ';
    bool foundOperator = false;

    while (index < expression.length()) {
        char currentChar = expression[index];

        if (currentChar == '(') {
            
            index++;
            float innerResult = solveOperation(expression, index);
            if (foundOperator)
                result = calculate(result, innerResult, op);
            else
                result = innerResult;
            foundOperator = false;
        }
        else if (currentChar == ')') {
            
            index++;
            break;
        }
        else if (isOperator(currentChar)) {
            
            op = currentChar;
            foundOperator = true;
            index++;
        }
        else if (isdigit(currentChar) || currentChar == '.') {
            
            string numStr;
            while (index < expression.length() && (isdigit(expression[index]) || expression[index] == '.')) {
                numStr += expression[index];
                index++;
            }
            float num = stof(numStr);
            if (foundOperator)
                result = calculate(result, num, op);
            else
                result = num;
            foundOperator = false;
        }
        else {
            
            index++;
        }
    }
    return result;
}

int main() {
    char choice = 'Y';
    
    while (choice == 'Y' || choice == 'y') {
        cout << "Enter a problem to solve: ";
        string problem;
        getline(cin, problem);

        int index = 0;
        float result = solveOperation(problem, index);

        cout << "The answer to this problem is: " << result << endl;

        cout << "Would you like to solve another problem? (Y/N) ";
        cin >> choice;
        cin.ignore();
    }

    cout << "Thank you for using this calculator!" << endl;

    return 0;
}
