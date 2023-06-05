#include <iostream>
#include <iomanip>

using namespace std;

double calculateSalary(int hours, double hourlyRate) {
    double salary = 0.0;

    if (hours <= 60) {
        salary = hours * hourlyRate;
    } else if (hours <= 120) {
        salary = 60 * hourlyRate + (hours - 60) * hourlyRate * 1.33;
    } else {
        salary = 60 * hourlyRate + 60 * hourlyRate * 1.33 + (hours - 120) * hourlyRate * 1.66;
    }

    return salary;
}

int main() {
    int hours;
    double hourlyRate;

    cin >> hours;

    cin >> hourlyRate;

    double salary = calculateSalary(hours, hourlyRate);

    cout << fixed << setprecision(1) << salary << endl;

    return 0;
}
