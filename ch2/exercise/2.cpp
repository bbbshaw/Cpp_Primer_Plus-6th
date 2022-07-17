#include <iostream>

int main(void)
{
    using namespace std;

    cout << "Please enter the distance in furlong:" << endl;
    double furlong_dis;
    cin >> furlong_dis;
    double yard_dis;
    yard_dis = furlong_dis * 220;

    cout << furlong_dis << " furlongs = " << yard_dis << " yards" << endl;

    return 0;
}