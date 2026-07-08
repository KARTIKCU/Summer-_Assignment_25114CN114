//WAP  to Write function for Fibonacci

#include <iostream>
using namespace std;

int Fibonacci(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    int a = 0, b = 1, next = 0;
    for (int i = 3; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    cout << "7th Fibonacci term: " << Fibonacci(7) << endl;
    return 0;
}