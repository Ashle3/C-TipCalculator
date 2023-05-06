// C++TipCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip> //lets me round to 2 decimal places
using namespace std;

int main()
{
    double subtotal; //define input variable
    cout << "Enter the subtotal: "; //input prompt
    cin >> subtotal; //gets user input and stores it into subtotal variable
    
    double percent = 0.2; //holds the variable containing the 20% tip
    cout << fixed << setprecision(2); //lets me round to 2 decimal places using iomanip library
    double tip = subtotal * percent; //calculates the tip
    cout << "Your recommended tip is $" << tip; //prints out the recommended tip
    double newtotal = subtotal + tip; //adds the subtotal and tip together
    cout << "\nYour total including tip is now $" << newtotal; //prints out the new total

    return 0; //is used to exit function
}



