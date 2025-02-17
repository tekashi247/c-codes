#include <iostream>
using namespace std;

// Function to calculate factorial recursively
unsigned long long factorial(int n) {
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0; // Return 0 for negative input
    }
    if (n == 0 || n == 1) {
        return 1; // Base case: 0! = 1 and 1! = 1
    }
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    unsigned long long result = factorial(number);
    if (number >= 0) {
        cout << "Factorial of " << number << " is " << result << endl;
    }

    return 0;
}