#include <iostream>

using namespace std;

const int HOURS_PER_DAY = 24;
const int MINUTES_PER_HOUR = 60;
const int SECONDS_PER_MINUTE = 60;

int main() {
    int totalSeconds;
    cin >> totalSeconds;

    int days = totalSeconds / (HOURS_PER_DAY * MINUTES_PER_HOUR * SECONDS_PER_MINUTE);
    int remainingSeconds = totalSeconds % (HOURS_PER_DAY * MINUTES_PER_HOUR * SECONDS_PER_MINUTE);

    int hours = remainingSeconds / (MINUTES_PER_HOUR * SECONDS_PER_MINUTE);
    remainingSeconds = remainingSeconds % (MINUTES_PER_HOUR * SECONDS_PER_MINUTE);

    int minutes = remainingSeconds / SECONDS_PER_MINUTE;
    int seconds = remainingSeconds % SECONDS_PER_MINUTE;

    cout << days << " days" << endl;
    cout << hours << " hours" << endl;
    cout << minutes << " minutes" << endl;
    cout << seconds << " seconds" << endl;

    return 0;
}
