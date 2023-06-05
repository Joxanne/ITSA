#include <iostream>

using namespace std;

void printMultiples(int n) {
    bool found = false;

    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0 && i % 7 == 0) {
            if (found) {
                cout << " ";
            }
            cout << i;
            found = true;
        }
    }

    cout << endl;
}

int main() {
    int n;

    cin >> n;

    printMultiples(n);

    return 0;
}
