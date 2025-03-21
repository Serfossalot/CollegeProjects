#include <iostream>
#include <stack>

using namespace std;

class StackCalculator {
private:
    stack<int> s; // Stack to store integers

public:
    // Push a value onto the stack
    void push(int value) {
        s.push(value);
        cout << "Pushing " << value << endl;
    }

    // Multiply the top two elements
    void mult() {
        if (s.size() < 2) {
            cout << "Not enough elements to multiply!" << endl;
            return;
        }
        int a = s.top(); s.pop();
        int b = s.top(); s.pop();
        int result = a * b;
        s.push(result);
        cout << "The product is " << result << endl;
    }

    // Divide the top two elements (second top / top)
    void div() {
        if (s.size() < 2) {
            cout << "Not enough elements to divide!" << endl;
            return;
        }
        int a = s.top(); s.pop();
        int b = s.top(); s.pop();
        if (a == 0) {
            cout << "Cannot divide by zero!" << endl;
            s.push(b); s.push(a); // Push elements back
            return;
        }
        int result = b / a;
        s.push(result);
        cout << "The quotient is " << result << endl;
    }

    // Subtract the top element from the second top element
    void subtract() {
        if (s.size() < 2) {
            cout << "Not enough elements to subtract!" << endl;
            return;
        }
        int a = s.top(); s.pop();
        int b = s.top(); s.pop();
        int result = b - a;
        s.push(result);
        cout << "The difference is " << result << endl;
    }

    // Sum all values in the stack
    void addAll() {
        if (s.empty()) {
            cout << "The stack is empty!" << endl;
            return;
        }
        int sum = 0;
        stack<int> temp = s;
        while (!temp.empty()) {
            sum += temp.top();
            temp.pop();
        }
        cout << "The sum of all values in the stack is " << sum << endl;
    }

    // Multiply all values in the stack
    void multAll() {
        if (s.empty()) {
            cout << "The stack is empty!" << endl;
            return;
        }
        int product = 1;
        stack<int> temp = s;
        while (!temp.empty()) {
            product *= temp.top();
            temp.pop();
        }
        cout << "The product of all values in the stack is " << product << endl;
    }
};

// Driver Program
int main() {
    StackCalculator calc;

    // Demonstration of operations
    calc.push(3);
    calc.push(6);
    calc.addAll();  // Should print: The sum is 9

    calc.push(3);
    calc.push(6);
    calc.mult();  // Should print: The product is 18

    calc.push(3);
    calc.push(6);
    calc.div();  // Should print: The quotient is 2

    calc.push(7);
    calc.push(10);
    calc.subtract();  // Should print: The difference is 3

    calc.push(2);
    calc.addAll();  // Should print: The sum of all values in the stack is 2

    return 0;
}
