//WAP TO  Move zeroes to end

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 0, 2, 3, 0, 4, 0, 5};
    int n = 8;
    
    int count = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }
    while (count < n) {
        arr[count] = 0;
        count++;
    }
    
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}