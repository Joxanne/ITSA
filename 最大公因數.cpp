#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    cin >> num1 >> num2;

    int result = gcd(num1, num2);

    cout << result << endl;

    return 0;
}
