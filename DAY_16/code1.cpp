//WAP  to Find missing number  in array

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5, 6}; 
    int n = 5;
    int total_elements = n + 1;
    
    int expected_sum = total_elements * (total_elements + 1) / 2;
    int actual_sum = 0;
    
    for (int i = 0; i < n; i++) {
        actual_sum += arr[i];
    }
    
    cout << "Missing number: " << (expected_sum - actual_sum) << endl;
    return 0;
}