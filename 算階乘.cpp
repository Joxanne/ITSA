#include <iostream>

using namespace std;

unsigned long long factorial(int n, unsigned long long result = 1) {
    if (n == 0) {
        return result;
    }
    return factorial(n - 1, result * n);
}

int main() {
    int n;

    cin >> n;

    unsigned long long result = factorial(n);

    cout << result << endl;

    return 0;
}
