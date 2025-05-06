#include <iostream>
using namespace std;

class Calculator {
private:
    float num1, num2;

public:
    void setNumbers(float a, float b);
    void add();
    void subtract();
    void multiply();
    void divide();
};

// Function definitions
void Calculator::setNumbers(float a, float b) {
    num1 = a;
    num2 = b;
}

void Calculator::add() {
    cout << "Addition: " << (num1 + num2) << endl;
}

void Calculator::subtract() {
    cout << "Subtraction: " << (num1 - num2) << endl;
}

void Calculator::multiply() {
    cout << "Multiplication: " << (num1 * num2) << endl;
}

void Calculator::divide() {
    if (num2 != 0)
        cout << "Division: " << (num1 / num2) << endl;
    else
        cout << "Error: Division by zero!" << endl;
}

int main() {
    Calculator calc;
    float a, b;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    calc.setNumbers(a, b);

    cout << "Choose operation (+ - * /): ";
    cin >> op;

    switch(op) {
        case '+': calc.add(); break;
        case '-': calc.subtract(); break;
        case '*': calc.multiply(); break;
        case '/': calc.divide(); break;
        default: cout << "Invalid operation!" << endl;
    }

    return 0;
}

