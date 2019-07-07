/* This is a compound interest calculator. */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double amountYearEnd;
    double presentValue;
    double discountRate;
    int yearInput;

    //set floating-point number format
    cout << fixed << setprecision(2);

    //user inputs
    cout << "Please enter the number of years: ";
    cin >> yearInput;

    cout << "Please enter the present value / principal: ";
    cin >> presentValue;

    cout << "Please enter the discount rate as a decimal: ";
    cin >> discountRate;

    //display headers
    cout << "Year" << setw(22) << "End amount" << endl;
    
    //calculate
    for (int year = 0; year <= yearInput ; year++)
    {
        amountYearEnd = presentValue * pow(1.0 + discountRate, year);
        cout << setw(4) << year << setw(22) << amountYearEnd << endl;
    }
}
