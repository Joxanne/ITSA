#include <iostream>
#include <iomanip> 

using namespace std;

int main() {

    double celsius;
    cin >> celsius;

    double fahrenheit = celsius * 9 / 5 + 32;

    cout << fixed << setprecision(1) << fahrenheit << endl;

    return 0;
}
