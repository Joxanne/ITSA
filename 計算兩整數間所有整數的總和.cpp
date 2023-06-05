#include <iostream>

using namespace std;

int calculateSum(int num1, int num2) {
    int sum = 0;

    // 確保 num1 是較小的數字
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (int i = num1; i <= num2; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    int num1, num2;

    cin >> num1 >> num2;

    int sum = calculateSum(num1, num2);

    cout << sum << endl;

    return 0;
}
