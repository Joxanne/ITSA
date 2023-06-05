#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // 輸入兩人距離公尺數
    int distance;
    cin >> distance;
    distance*=1000;

    int seconds = distance / 238;
    distance%238 == 0 ? : seconds+=1;

    cout << seconds << endl;

    return 0;
}
