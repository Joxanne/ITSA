#include <iostream>

using namespace std;

void printMultiplicationTable(int n) {
    for (int i = 1; i <= n; i++) {
        int product = i * i;
        cout << i << "*" << i << "=" << product << endl;
    }
}

int main() {
    int n;

    cin >> n;

    printMultiplicationTable(n);

    return 0;
}
