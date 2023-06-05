#include <iostream>

using namespace std;

int main(){

    int a, b;
    cin >> a >> b;
    int sum = a + b;
    int product = a * b;
    int difference = a - b;
    int quotient = a / b;
    int remainder = a % b;
    
    cout << a << "+" << b << "=" << sum << endl;
    cout << a << "*" << b << "=" << product << endl;
    cout << a << "-" << b << "=" << difference << endl;
//    if
    if(remainder < 0){
        cout << a << "/" << b << "=" << quotient-1 << "..." << remainder+b << endl;
    }
    else
    cout << a << "/" << b << "=" << quotient << "..." << remainder << endl;

    return 0;
}
    