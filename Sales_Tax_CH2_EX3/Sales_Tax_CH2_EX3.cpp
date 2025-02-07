/*
* Programmer Name: Nicholas Woolston
* Date: 07/02/2025 (DD//MM//YYYY)
* File Name: Sales_Tax_CH2_EX3
* Expected Results: Write a program that will computethe total sales tax on $95.
* Assume a state tax of 4% and a county tax of 2%. 
*/


#include <iostream>
using namespace std;

int main()
{
    double purchase = 95;
    cout << "Your purchase of $95 comes with a tax of: $" << (.04 * purchase) + (.02 * purchase); 
    //this calculates taxes but very ineffectively. I'd ideally like to have ((TAX / 100) * PURCHASE) but since the raw numbers aren't floats, C++ truncates them to 0.
    //this issue is easily solved with a modular design that permits user input (since you can change the values to doubles). 
}

