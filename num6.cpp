#include <iostream>
using namespace std;

int main() {
    int start = 3;
    int n ;
    cout << "Enter the size of the Incrementing Diamond Pattern: ";  
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++) {
        int num = start + i - 1;

        for (int j = 1; j <= i; j++) {
            cout << num << " ";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        int num = start + i - 1;

        for (int j = 1; j <= i; j++) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}