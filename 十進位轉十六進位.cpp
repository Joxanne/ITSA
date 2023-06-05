#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string decimalToHex(int decimal) {
    stringstream ss;
    ss << hex << uppercase << decimal;
    return ss.str();
}

int main() {
    int decimal;

    cin >> decimal;

    string hex = decimalToHex(decimal);

    cout << hex << endl;

    return 0;
}
