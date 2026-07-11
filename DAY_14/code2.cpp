//WAP to frequency of an element 

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 2, 5, 2, 6, 3};
    int n = 7, key = 2, count = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) count++;
    }
    cout << "Frequency of " << key << " is: " << count << endl;
    return 0;
}