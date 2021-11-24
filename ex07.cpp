/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Faiz Ahmed
 */

#include <iostream>
#include <string>
#include "std_lib_facilities.h"
using namespace std;


int getval()
{
    int input;
    cout << "Enter a digit or single digit spelled number: ";
    if(cin>>input) //checking if user entered int if did then return it
        return input;
    //else try to find letter
    cin.clear();    
    string str;
    cin>>str;
    const char *letter[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int i = 0; i < sizeof(letter); i++)
    {
        if(str.compare(letter[i]) == 0)
        {
            return i+1;
        }
    }
    return -1;
}

void calculate(string operation, int n1, int n2)
{
    int result = 0;
    if(operation == "+") //calculating addition 
        result = n1 + n2;
    else if(operation == "-")   //calculating subtraction
        result = n1 - n2;
    else if(operation == "*")   //calculating multiplication    
        result = n1 * n2;
    else if(operation == "/")   //calculating division 
        result = n1 / n2;
    else
    {
        cout << "Invalid operation.";
        return;
    }

    cout << "The result is " << result << "\n";
    
}

int main()
{
    string operation;
    int n1,n2;
    n1 = getval();
    n2 = getval();
    cout << "Enter operation eg: + - / * \n";
    cin >> operation; // taking input.

    calculate(operation, n1, n2);
    return 0;
}