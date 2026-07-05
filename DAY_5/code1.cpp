// WAP to Check perfect number

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    
    for (int i = 1; i < num; i++) {
        if (num % i == 0) sum += i;
    }
    
    if (sum == num) cout << "Perfect number" << endl;
    else cout << "Not a perfect number" << endl;
    return 0;
}