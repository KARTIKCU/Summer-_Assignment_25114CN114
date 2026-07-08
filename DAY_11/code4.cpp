//WAP  to Write function to find factorial

#include <iostream>
using namespace std;

long getFactorial(int n) {
    long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    cout << "Factorial: " << getFactorial(5) << endl;
    return 0;
}