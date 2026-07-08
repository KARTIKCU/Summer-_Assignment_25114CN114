//WAP TO Write function to find sum of two numbers
 
#include <iostream>
using namespace std;

int findSum(int a, int b) {
    return a + b;
}

int main() {
    int x = 10, y = 20;
    cout << "Sum: " << findSum(x, y) << endl;
    return 0;
}