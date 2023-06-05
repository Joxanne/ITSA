#include <iostream>

using namespace std;

int main() {
    const int squareSize = 100;
    int x, y;

    cin >> x >> y;

    if (x >= 0 && x <= squareSize && y >= 0 && y <= squareSize) {
        cout << "inside" << endl;
    } else {
        cout << "outside" << endl;
    }

    return 0;
}
