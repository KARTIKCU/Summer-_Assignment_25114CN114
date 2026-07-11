//WAP  to Remove duplicates from array

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = 7;
    int new_size = 0;
    
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < new_size; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            arr[new_size] = arr[i];
            new_size++;
        }
    }
    
    for (int i = 0; i < new_size; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}