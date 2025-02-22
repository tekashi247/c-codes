#include <iostream>
#include <chrono>

using namespace std;

// Recursive function to calculate Fibonacci number
unsigned long long fibonacci_recursive(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

// Iterative function to calculate Fibonacci number
unsigned long long fibonacci_iterative(int n) {
    if (n <= 1) {
        return n;
    }
    unsigned long long a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;

    cout << "Enter the position in Fibonacci sequence (n): ";
    cin >> n;

    // Measure time for recursive approach
    auto start_recursive = chrono::high_resolution_clock::now();
    unsigned long long result_recursive = fibonacci_recursive(n);
    auto end_recursive = chrono::high_resolution_clock::now();
    chrono::duration<double> duration_recursive = end_recursive - start_recursive;

    // Measure time for iterative approach
    auto start_iterative = chrono::high_resolution_clock::now();
    unsigned long long result_iterative = fibonacci_iterative(n);
    auto end_iterative = chrono::high_resolution_clock::now();
    chrono::duration<double> duration_iterative = end_iterative - start_iterative;

    // Output results
    cout << "Fibonacci number at position " << n << " (Recursive): " << result_recursive << endl;
    cout << "Time taken (Recursive): " << duration_recursive.count() << " seconds" << endl;

    cout << "Fibonacci number at position " << n << " (Iterative): " << result_iterative << endl;
    cout << "Time taken (Iterative): " << duration_iterative.count() << " seconds" << endl;

    return 0;
}