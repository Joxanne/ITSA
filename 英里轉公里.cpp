#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double convertMilesToKilometers(int miles) {
    double kilometers = miles * 1.6;
    double roundedKilometers = round(kilometers * 10) / 10;
    return roundedKilometers;
}

int main() {
    int miles;
    cin >> miles;

    double kilometers = convertMilesToKilometers(miles);
        cout << fixed << setprecision(1) << kilometers << endl;

    return 0;
}