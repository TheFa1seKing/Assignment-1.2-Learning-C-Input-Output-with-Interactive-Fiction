// Assignment .1.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;  // Makes it so you dot have to type std:: for every line.

int main() {
    int num1, num2, result;
    char operation;

    cout << "Enter the first number: "; // Get input from the user
    cin >> num1;

    cout << "Enter the second number: "; // Get input from the user
    cin >> num2;

    cout << "Enter the operation (+, -, *, /): "; // Get input from the user
    cin >> operation;

    // Perform the operation
    switch (operation) {
    case '+': // will add the two numbers together
        result = num1 + num2;
        break;
    case '-': // will subtract the two numbers together
        result = num1 - num2;
        break;
    case '*':// will multuply the two numbers together
        result = num1 * num2;
        break;
    case '/':// will divide the two numbers together
        if (num2 != 0) { if (num2 != 0) {// will check to see if num2 is a zero and if it is will exit with an error.
            result = num1 / num2;
        }
        else {
            cout << "Error: Division by zero!" << std::endl;
            return 1; // Exit with an error code
        }
            result = num1 / num2;
        }
        else {
            cout << "Error: Division by zero!" << std::endl;
            return 1; // Exit with an error code
        }
        break;
    default:// If an something puts something other then an operation it will return a error.
        cout << "Error: Invalid operation!" << std::endl;
        return 1; // Exit with an error code
    }

    // Display the result
    cout << "Result: " << result << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
