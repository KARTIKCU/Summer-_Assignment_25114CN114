// WAP  to Find largest prime factor

#include <iostream>
using namespace std;

int main() {
    int n, maxPrime = -1;
    cout << "Enter a number: ";
    cin >> n;
    
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }
    if (n > 1) maxPrime = n;
    
    cout << "Largest Prime Factor: " << maxPrime << endl;
    return 0;
}