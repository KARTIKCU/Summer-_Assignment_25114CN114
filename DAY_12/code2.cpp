// WAP to Write function for Armstrong

#include <iostream>
using namespace std;

bool isArmstrong(int n) {
    int temp = n, digits = 0, sum = 0;
    
    // Count digits
    while (temp > 0) { 
        digits++; 
        temp /= 10; 
    }
    
    temp = n;
    while (temp > 0) {
        int d = temp % 10;
        int p = 1;
        for (int i = 0; i < digits; i++) {
            p *= d;
        }
        sum += p;
        temp /= 10;
    }
    return n == sum;
}

int main() {
    if (isArmstrong(153)) 
        cout << "Armstrong Number" << endl;
    return 0;
}