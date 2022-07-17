#include <iostream>

int main(void)
{
    using namespace std;

    cout << "Please enter your age:" << endl;

    int age, month;
    cin >> age;
    month = age * 12;

    cout << "Your age in month: " << month << endl;

    return 0;
}