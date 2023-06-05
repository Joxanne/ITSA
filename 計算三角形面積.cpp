#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    double a, b, ans;
    cin >> a >> b;
    ans = a*b/2;
    cout << fixed << setprecision(1) << ans << endl;
}