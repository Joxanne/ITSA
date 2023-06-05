#include <iostream>

using namespace std;

int calculateSum(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int n;

    cin >> n;

    int sum = calculateSum(n);

    cout << sum << endl;

    return 0;
}
