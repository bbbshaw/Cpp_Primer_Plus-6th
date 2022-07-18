#include <iostream>

const int DEGREE_TO_MIN = 60;
const int DEGREE_TO_SEC = 3600;

int main(void)
{
    using namespace std;
    
    int degree, minute, second;
    double degree_style;

    cout << "Enter a latitude in degrees, minutes, and seconds:\n";
    cout << "First, enter the degrees: ";
    cin >> degree;
    cout << "Next, enter the minutes of arc: ";
    cin >> minute;
    cout << "Finally, enter the seconds of arc: ";
    cin >> second;

    degree_style = degree + (double)minute / DEGREE_TO_MIN + (double)second / DEGREE_TO_SEC;

    cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = ";
    cout << degree_style << " degrees." << endl;

    return 0;
}