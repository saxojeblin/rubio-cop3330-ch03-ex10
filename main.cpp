/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Nicholas Rubio
 */

#include <iostream>

using namespace std;

int main() 
{
    double num1, num2, result;
    string op, userInput;

    cout << "Please enter an operation followed by two numbers (i.e. + 5 10): ";
    cin >> op >> num1 >> num2;

    if (op == "plus" || op == "+")
    {
        result = num1 + num2;
    } 
    else if (op == "minus" || op == "-")
    {
        result = num1 - num2;
    } 
    else if (op == "mul" || op == "*")
    {
        result = num1 * num2;
    } 
    else if (op == "div" || op == "/")
    {
        result = num1 / num2;
    } 
    else
    {
        cout << "Invalid operation given." << endl;
        return 0;
    }

    cout << num1 << " " << op << " " << num2 << " = " << result << endl; 

    return 0;
}