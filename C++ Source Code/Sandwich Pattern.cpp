#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the Sandwich Pattern: ";
    cin >> n;

    // Upper part
    for (int i = 0; i < 2; i++) {
        // Spaces
        for (int j = 0; j < i; j++)
            cout << " ";

        // Numbers
        for (int j = 0; j < 5 - 2 * i; j++)
            cout << n + i << " ";

        cout << endl;
    }

    // Middle row
    for (int i = 0; i < 2; i++)
        cout << " ";
    cout << 5 << endl;

    // Lower part
    for (int i = 1; i >= 0; i--) {
        // Spaces
        for (int j = 0; j < i; j++)
            cout << " ";

        // Numbers
        for (int j = 0; j < 5 - 2 * i; j++)
            cout << n + i << " ";

        cout << endl;
    }

    return 0;
}
