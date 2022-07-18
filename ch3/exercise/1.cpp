#include <iostream>

const int FOOT_TO_INCH = 12;

int main(void)
{
    using namespace std;

    cout << "Please enter the value of inches:" << endl;
    int inch;
    cin >> inch;
    cout << inch << " is equal to " << inch / FOOT_TO_INCH << " feet and " << inch % FOOT_TO_INCH << " inches.\n";
    
    return 0;
}