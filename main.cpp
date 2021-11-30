/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Dave Gershman
 */

#include <iostream>
using std::string;

using namespace std;

int main()
{
    string operation;
    double operand1;
    double operand2;
    
    cout << "Enter an operation followed by two operands: ";
    cin >> operation >> operand1 >> operand2;
    
    double result = 0;
    
    if (operation == "+")
        result = operand1 + operand2;
    
    if (operation == "-")
        result = operand1 - operand2;
        
    if (operation == "*")
        result = operand1 * operand2;
        
    if (operation == "/")
        result = operand1 / operand2;
        
    cout << "The result is " << result;
    
    return 0;
}











