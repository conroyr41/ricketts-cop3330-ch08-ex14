#include <iostream>
#include "my_app.h"

using namespace std;

int main()
{
    double input;

    cout << "\nEnter a number: ";

    cin >> input;

    echoNumber(input);

    return 0;
}