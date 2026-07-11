// WAP to linear  search

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 23, 45, 70, 11, 15};
    int n = 6, key = 70, index = -1;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }
    if (index != -1) 
        cout << "Element found at index: " << index << endl;
    else 
        cout << "Element not found" << endl;
    return 0;
}