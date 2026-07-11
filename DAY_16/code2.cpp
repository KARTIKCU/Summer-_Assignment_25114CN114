//WAP to Find maximum frequency element

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 2, 1, 4, 1, 3, 2, 2, 2};
    int n = 10;
    
    int max_count = 0, max_element = arr[0];
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) count++;
        }
        if (count > max_count) {
            max_count = count;
            max_element = arr[i];
        }
    }
    cout << "Max Frequency Element: " << max_element << endl;
    return 0;
}