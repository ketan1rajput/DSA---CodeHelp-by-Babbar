#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int ans = 0;
    char operation;

    cout << "Enter num 1: ";
    cin >> num1;
    cout << "Enter num 2: ";
    cin >> num2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            ans = num1 + num2;
            break;
        case '-':
            ans = num1 - num2;
            break;
        case '*':
            ans = num1 * num2;
            break;
        case '/':
            if (num2 != 0) { // Check for division by zero
                ans = num1 / num2;
            } else {
                cout << "Error: Division by zero" << endl;
                return 1;
            }
            break;
        default:
            cout << "Invalid operation" << endl;
            return 1;
    }

    cout << "This is the answer: " << ans << endl;

    return 0;
}
