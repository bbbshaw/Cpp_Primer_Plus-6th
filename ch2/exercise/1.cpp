#include <iostream>

int main(void)
{
    using namespace std;

    cout << "Please enter your name:" <<endl;
    
    char name[10];
    cin >> name;
    cout << "Your name: " << name << endl;

    return 0;
}