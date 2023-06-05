#include <iostream>

using namespace std;

int main() {
    int coin10 = 10;
    int coin5 = 5;
    int coin1 = 1;


    int ticketPrice;
    cin >> ticketPrice;

    int numCoin10 = ticketPrice / coin10;
    int numCoin5 = (ticketPrice % coin10) / coin5;
    int numCoin1 = (ticketPrice % coin10 % coin5) / coin1;

    // 輸出結果
    cout << "NT10=" << numCoin10 << endl;
    cout << "NT5=" << numCoin5 << endl;
    cout << "NT1=" << numCoin1 << endl;

    return 0;
}
