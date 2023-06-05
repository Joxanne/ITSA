#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int circleRadius = 100;
    int x, y;

    cin >> x >> y;

    double distance = sqrt(x * x + y * y);

    if (distance <= circleRadius) {
        cout << "inside" << endl;
    } else {
        cout << "outside" << endl;
    }

    return 0;
}
