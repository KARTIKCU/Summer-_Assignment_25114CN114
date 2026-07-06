// WAP  to Recursive sum of digits

#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10); 
}

int main() {
    int num = 1234;
    cout << "Sum of digits of " << num << " is: " << sumOfDigits(num) << endl;
    return 0;
}