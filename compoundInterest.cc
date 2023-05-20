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

    cout << "Please enter the investment amount, the interest (in percent), and the duration (in years): ";
    cin >> investment_amount >> annual_interest_rate >> years;

    if (cin.fail()){
        cout << "Error: One of the inputted values is not a number. Please run again and enter a valid number." << endl;
        return 1;
    }

    else if (investment_amount < 0 || annual_interest_rate < 0 || years < 0){
        cout << "Error: One of the inputted values is negative. Please run again and enter non-negative numbers." << endl;
        return 1;
    }

    return 0;
}