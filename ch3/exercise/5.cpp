#include <iostream>

int main(void)
{
    using namespace std;

    long long word_population, us_population;
    double pop_ratio;

    cout << "Enter the world's population: ";
    cin >> word_population;
    cout << "Enter the population of the US: ";
    cin >> us_population;

    pop_ratio = (double) us_population / (double) word_population * 100;
    cout << "The population of the US is " << pop_ratio << "% of the world population.\n";

    return 0;
}