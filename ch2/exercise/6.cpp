#include <iostream>

double light_to_ast(double value);

int main(void)
{
    using namespace std;

    double light_year;
    cout << "Enter the number of light years:";
    cin >> light_year;
    double ast_unit;
    ast_unit = light_to_ast(light_year);
    cout << light_year << " light years = " << ast_unit << " astrononmical units." << endl;

    return 0;
}

double light_to_ast(double value)
{
    return value * 63240;
}