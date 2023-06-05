#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double roundToFirstDecimal(double num) {
    double rounded = round(num * 10) / 10;
    return rounded;
}

    int main(){
        double r;
        cin >> r;
        double roundedNum = roundToFirstDecimal(r*r);
        cout << fixed << setprecision(1) << roundedNum << endl;
    }

