//WAP to Count even and odd  elements

#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 35, 40, 71, 56, 89};
    int n = 6;
    int even = 0, odd = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) 
            even++;
        else 
            odd++;
    }
    cout << "Even: " << even << ", Odd: " << odd << endl;
    return 0;
}