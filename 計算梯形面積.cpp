#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double a,b,c;
    cin >> a >> b >> c;
    double ans;
    ans = (a+b)*c/2;
    cout << "Trapezoid area:" << fixed << setprecision(1) << ans << endl;

}