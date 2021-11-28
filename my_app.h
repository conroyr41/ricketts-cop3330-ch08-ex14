/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Conroy Ricketts
 */

#include <iostream>

using namespace std;

void echoString(const string str)
{
    cout << "\nThe word given was \"" << str << "\". There was no need to edit this value so it made sense to utilize a non-reference function argument.\n";
}

void echoNumber(const double num)
{
    cout << "\nThe number given was \"" << num << "\". There was no need to edit this value so it made sense to utilize a non-reference function argument.\n";
}