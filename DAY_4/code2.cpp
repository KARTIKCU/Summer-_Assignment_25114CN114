// WAP to Find nth Fibonacci term

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter position: ";
    cin >> n;
    
    int a = 0, b = 1, next = 0;
    if (n == 1) cout << a << endl;
    else if (n == 2) cout << b << endl;
    else {
        for (int i = 3; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        cout << b << endl;
    }
    return 0;
}