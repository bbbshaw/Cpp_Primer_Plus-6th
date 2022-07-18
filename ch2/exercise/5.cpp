#include <iostream>

int main(void)
{
    using namespace std;

    cout << "Please enter a celsius value:" << endl;
    
    double cel_value;
    cin >> cel_value;
    double fa_value;
    fa_value = 1.8 * cel_value + 32.0;
    cout << cel_value << " degrees Celsius is " << fa_value << " degrees Fahrenheit." << endl;

    return 0;
}