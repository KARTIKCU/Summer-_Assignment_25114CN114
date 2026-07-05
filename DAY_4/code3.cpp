// WAP to Check Armstrong number

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, temp, count = 0, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    
    original = num;
    temp = num;
    while (temp > 0) {
        count++;
        temp /= 10;
    }
    
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }
    
    if (sum == original) cout << "Armstrong number" << endl;
    else cout << "Not an Armstrong number" << endl;
    return 0;
}