#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number;
    cin >> number;

    int square = pow(number, 2);
    int cube = pow(number, 3);

    cout << number << " " << square << " " << cube << endl;

    return 0;
}
