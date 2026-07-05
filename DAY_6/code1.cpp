// WAP to Convert decimal to binary

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter decimal number: ";
    cin >> n;
    
    int binary[32], i = 0;
    if (n == 0) cout << 0;
    
    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    
    for (int j = i - 1; j >= 0; j--) cout << binary[j];
    cout << endl;
    return 0;
}