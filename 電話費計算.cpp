#include <iostream>
#include <iomanip>

using namespace std;

double calculateCallCost(int minutes) {
    double callCost;

    if (minutes <= 800) {
        callCost = minutes * 0.9;
    } else if (minutes < 1500) {
        callCost = minutes * 0.9 * 0.9;
    } else {
        callCost = minutes * 0.9 * 0.79;
    }

    return callCost;
}

int main() {
    int minutes;

    cin >> minutes;

    double callCost = calculateCallCost(minutes);

    cout << fixed << setprecision(1) << callCost << endl;

    return 0;
}
