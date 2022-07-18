#include <iostream>

const int HOUR_TO_MIN = 60;
const int DAY_HOUR = 24;
const int MIN_TO_SEC = 60;

int main(void)
{
    using namespace std;
    
    long long second, second_input;
    int day, hour, minute;

    cout << "Please enter the number of second: ";
    cin >> second;
    second_input = second;

    day = second / (DAY_HOUR * HOUR_TO_MIN * MIN_TO_SEC);
    second = second % (DAY_HOUR * HOUR_TO_MIN * MIN_TO_SEC);
    
    hour = second / (HOUR_TO_MIN * MIN_TO_SEC);
    second = second % (HOUR_TO_MIN * MIN_TO_SEC);
    
    minute = second / (MIN_TO_SEC);
    second = second % (MIN_TO_SEC);

    cout << second_input << " seconds = " << day << " days, " << hour << " hours, " << minute << " minutes, ";
    cout << second << " seconds" << endl;

    return 0;
}