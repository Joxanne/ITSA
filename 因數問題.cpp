#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            cout << i;
            if (i != number) {
                cout << " ";
            }
        }
    }
    cout << endl;
    
    return 0;
}
