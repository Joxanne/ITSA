#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int num;

    cin >> num;

    // 將整數轉換為8位元的二進制表示
    bitset<8> binary(num);

    // 輸出二進制表示
    cout << binary << endl;

    return 0;
}
