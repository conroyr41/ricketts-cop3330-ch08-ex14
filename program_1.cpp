#include <iostream>
#include "my_app.h"

using namespace std;

int main()
{
    string input;

    cout << "\nEnter a word: ";

    cin >> input;

    echoString(input);

    return 0;
}