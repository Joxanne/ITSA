#include <iostream>

using namespace std;

int main() {
    int number;

    cin >> number;

    // 分解數字
    int digit1 = number / 100;
    int digit2 = (number / 10) % 10;
    int digit3 = number % 10;

    // 計算立方和
    int sum = (digit1 * digit1 * digit1) + (digit2 * digit2 * digit2) + (digit3 * digit3 * digit3);

    // 判斷是否為阿姆斯壯數
    if (sum == number) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
