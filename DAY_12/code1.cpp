//WAP  to Write function for palindrome

#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n;
    int rev = 0;
    while (n > 0) {
        rev = (rev * 10) + (n % 10);
        n = n / 10;
    }
    return original == rev;
}

int main() {
    if (isPalindrome(121)) 
        cout << "Palindrome" << endl;
    else 
        cout << "Not Palindrome" << endl;
    return 0;
}