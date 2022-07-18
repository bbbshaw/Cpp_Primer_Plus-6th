#include <iostream>

const int FOOT_TO_INCH = 12;
const double INCH_TO_METER = 0.0254;
const double KG_TO_POUND = 2.2;

int main(void)
{
    using namespace std;

    int height_foot, height_inch;
    double weight_pound, height, weight;

    cout << "Please enter your height foot:";
    cin >> height_foot;
    cout << "Please enter your height inch:";
    cin >> height_inch;
    cout << "Please enter your weight in pound:";
    cin >> weight_pound;

    height = (height_foot * FOOT_TO_INCH + height_inch) * INCH_TO_METER;
    weight = weight_pound / KG_TO_POUND;

    cout << "Your BMI is " << weight / (height * height) << endl;

    return 0;
}