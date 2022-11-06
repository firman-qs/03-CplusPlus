#include <iostream>
using namespace std;

int main() {
    int n = 9;

    cout << "Segitiga sama kaki 1" << endl;
    for (int i = 1; i <= n; i++) {
        for (int k = n; k > i; k--) {
            cout << " ";
        }
        for (int j = 0; j < (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Segitiga sama kaki 1 terbalik" << endl;
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k < i; k++) {
            cout << " ";
        }
        for (int j = (2 * n - 1); j >= (2 * i - 1); j--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Segitiga sama kaki 1 terbalik" << endl;
    for (int i = 1; i <= n; i++) {
        if (i <= ((n / 2) + 1)) {
            for (int k = n; k > i; k--) {
                cout << " ";
            }
            for (int j = 0; j < (2 * i - 1); j++) {
                cout << "*";
            }
            cout << endl;
        } else {
            for (int k = 1; k < i; k++) {
                cout << " ";
            }
            for (int j = (2 * n - 1); j >= (2 * i - 1); j--) {
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}
