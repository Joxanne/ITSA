#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int findLargestPrime(int n) {
    for (int i = n - 1; i >= 2; i--) {
        if (isPrime(i)) {
            return i;
        }
    }

    return -1; // 如果找不到質數，返回-1
}

int main() {
    int n;

    cin >> n;

    int largestPrime = findLargestPrime(n);

    if (largestPrime != -1) {
        cout << largestPrime << endl;
    }

    return 0;
}
