/**
 *   @file: compoundInterest.cc
 * @author: Adam Ehlers
 *   @date: 05/20/2023
 *  @brief: A program that calculates the future value of an investment using compound interest. I asks the user for an investment amount, the annual interest rate as a percentage, and the time period in years
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double investment_amount;
    double annual_interest_rate;
    double years;
    double future_value;

    cout << "Please enter the investment amount, the interest (in percent), and the duration (in years): ";
    cin >> investment_amount >> annual_interest_rate >> years;  ///Inputting the dollar amount to invest, the annual interest rate (in percent), and the duration to invest (in years). If so, an error message appears and stops the code.

    if (cin.fail()){   ///Checks to see if there is an invalid type being inputted (such as a string)
        cout << "Error: At least one of the inputted values is not a number. Please run again and enter a valid number." << endl;
        return 1;
    }

    else if (investment_amount < 0 || annual_interest_rate < 0 || years < 0){   ///Checks to see if any of the inputted values are negative. If so, an error message appears and stops the code.
        cout << "Error: At least one of the inputted values is negative. Please run again and enter non-negative numbers." << endl;
        return 1;
    }

    else{
       future_value = investment_amount * pow(1 + (annual_interest_rate/100.00), years);   ///Calculates the future value of the invested funds
       cout << "Investment Amount: $" << fixed << setprecision(2) << investment_amount << endl;   /// Prints correctly formatted investment amount
       cout << "Interest: " << fixed << setprecision(2) << annual_interest_rate << "%" << endl;   /// Prints correctly formatted interest
       cout << "Number of Years: " << fixed << setprecision(2) << years << endl;   /// Prints correctly formatted number of years that the funds are accruing interest
       cout << "Future Value: $" << fixed << setprecision(2) << future_value << endl;   ///Prints correctly formatted future value of the invested funds
    }

    return 0;
}