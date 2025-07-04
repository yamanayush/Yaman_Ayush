#include <iostream>
using namespace std;

class Calculator {
public:
    double a, b;
    string operation;

    Calculator(double a, double b, string operation) {
        this->a = a;
        this->b = b;
        this->operation = operation;
    }

    double calculate() {
        if (operation == "add") return a + b;
        else if (operation == "subtract") return a - b;
        else if (operation == "multiply") return a * b;
        else if (operation == "divide") {
            if (b != 0) return a / b;
            else {
                cout << "Error: Division by zero" << endl;
                return 0;
            }
        } else {
            cout << "Invalid operation" << endl;
            return 0;
        }
    }
};

int main() {
    double a, b;
    string operation;
    cin >> a;
    cin >> b;

    cout << "Enter operation (add / subtract / multiply / divide): ";
    cin >> operation;

    Calculator calc(a, b, operation);
    double result = calc.calculate();

    cout  << result << endl;

    return 0;
}
