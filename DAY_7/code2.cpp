// WAP  to Recursive Fibonacci

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    cout << fibonacci(6) << endl; // Prints 6th index term (8)
    return 0;
}