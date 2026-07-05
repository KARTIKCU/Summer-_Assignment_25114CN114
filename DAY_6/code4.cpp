// WAP  to Find x^n without pow()

#include <iostream>
using namespace std;

int main() {
    double x;
    int n;
    cout << "Enter base (x) and exponent (n): ";
    cin >> x >> n;
    
    double result = 1.0;
    int absN = abs(n);   // abs() to calculate the absolute value of a number
    
    for (int i = 0; i < absN; i++) {
        result *= x;
    }
    
    if (n < 0) result = 1.0 / result;
    
    cout << "Result: " << result << endl;
    return 0;
}

