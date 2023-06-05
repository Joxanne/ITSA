#include <iostream>
using namespace std;

string getSeason(int month) {
    if (month >= 3 && month <= 5) {
        return "Spring";
    } else if (month >= 6 && month <= 8) {
        return "Summer";
    } else if (month >= 9 && month <= 11) {
        return "Autumn";
    } else {
        return "Winter";
    }
}

int main() {
    int month;
    cin >> month;

    string season = getSeason(month);
    cout << season << endl;

    return 0;
}
