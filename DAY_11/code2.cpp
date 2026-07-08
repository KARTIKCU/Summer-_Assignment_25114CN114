///WAP TO Write function to find maximum

#include <iostream>
using namespace std;

int findMax(int a, int b) {
    if (a > b) 
        return a;
    else 
        return b;
}

int main() {
    cout << "Maximum: " << findMax(45, 82) << endl;
    return 0;
}