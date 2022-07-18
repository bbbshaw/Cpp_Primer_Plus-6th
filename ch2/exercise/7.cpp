#include <iostream>

using namespace std;

void showtime(int hour, int min);

int main(void)
{  
    cout << "Enter the number of hours:";
    int hour;
    cin >> hour;
    cout << "Enter the number of minutes:";
    int min;
    cin >> min;
    showtime(hour, min);

    return 0;
}

void showtime(int hour, int min)
{
    cout << "Time: " << hour << ":" << min << endl;
}