#include <iostream>

const double HKM_TO_MILES = 62.14;
const double GALLON_TO_LITER = 3.875;

int main(void)
{
    using namespace std;

    double mpg, lhkm;

    cout << "What's your LHKM: ";
    cin >> lhkm;

    mpg = (GALLON_TO_LITER * HKM_TO_MILES) / lhkm;
    cout << "Your MPG: " << mpg << endl;

    return 0;
}