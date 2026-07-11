//WAP  to Find pair with given sum

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 4, 45, 6, 10, 8};
    int target = 16;
    int n = 6;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Pair found: " << arr[i] << " and " << arr[j] << endl;
                return 0;
            }
        }
    }
    cout << "No pair found" << endl;
    return 0;
}