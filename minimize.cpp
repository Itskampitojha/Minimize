#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int a, b;
        cin >> a >> b;  // Input a and b for each test case
        // The minimum value of (c - a) + (b - c) is always (b - a)
        cout << b - a << endl;
    }
    return 0;
}
