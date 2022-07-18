#include <iostream>

int main(void)
{
    using namespace std;

    double mile, gallon, mpg;

    cout << "how many miles you have driven: ";
    cin >> mile;
    cout << "How many gallons of gasoline you have used: ";
    cin >> gallon;

    mpg = mile / gallon;
    cout << "Your MPG: " << mpg << endl;

    return 0;
}