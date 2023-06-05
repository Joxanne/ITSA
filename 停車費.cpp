#include <iostream>

using namespace std;

int main() {

    int startHour, startMinute;
    cin >> startHour >> startMinute;

    int endHour, endMinute;
    cin >> endHour >> endMinute;

    int startTime = startHour * 60 + startMinute;
    int endTime = endHour * 60 + endMinute;

    int parkingTime = endTime - startTime;

    int parkingFee = 0;
    if (parkingTime <= 120) {
        parkingFee = (parkingTime / 30) * 30;
        //cout << parkingFee << "1" << endl;
    } else if (parkingTime <= 240) {
        parkingFee = 120 + ((parkingTime - 120) / 30) * 40;
        //cout << parkingFee << "2" << endl;
    } else {
        parkingFee = 280 + ((parkingTime - 240) / 30) * 60;
        //cout << parkingFee << "3" << endl;
    }

    cout << parkingFee << endl;

    return 0;
}
