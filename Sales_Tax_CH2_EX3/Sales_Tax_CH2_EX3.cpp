/*
* Programmer Name: Nicholas Woolston
* Date: 07/02/2025 (DD//MM//YYYY)
* File Name: Sales_Tax_CH2_EX3
* Expected Results: Write a program that will computethe total sales tax on $95.
* Assume a state tax of 4% and a county tax of 2%. 
*/


#include <iostream>
using namespace std;
double CalculateTax(double stateTax, double countyTax, double initPurchase);
double EnterCountyTax();
double EnterStateTax();
double EnterInitPurchase();


int main()
{
    double purchase = EnterInitPurchase();
    double stateTax = EnterStateTax();
    double countyTax = EnterCountyTax();
    double taxTotal = CalculateTax(stateTax, countyTax, purchase);
    cout << "Your purchase of $"<< purchase << " comes with a tax of : $" << taxTotal; 
}

double CalculateTax(double stateTax, double countyTax, double initPurchase)
{
    double taxTotal = ((stateTax / 100) * initPurchase) + ((countyTax / 100) * initPurchase);
    return taxTotal;
}

double EnterCountyTax()
{
    double counTax; 
    cout << "What is the county tax? ";
    cin >> counTax;
    return counTax;
}

double EnterStateTax()
{
    double staTax;
    cout << "What is the state tax? ";
    cin >> staTax;
    return staTax;
}

double EnterInitPurchase()
{
    double initPurch;
    cout << "How much was your purchase? ";
    cin >> initPurch;
    return initPurch;
}
