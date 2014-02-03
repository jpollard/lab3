// File: invest.cpp
// Created by: Joe Pollard
// Last modified: 02/02/14
// Synopsis: Calculate the return on an investment.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int initial(0); // the initial invested
  int interest(0); // the interest paid
  int quarters(0); // the number of quarters to invest
  double years(0.0); // years from quarters
  double final(0.0); // the final amount out.

  // Question and answer phase to get the user input
  cout << "Enter intitial investment (dollars): ";
  cin >> initial;
  cout << "Enter interest rate per year (percentage): ";
  cin >> interest;
  cout << "Enter number of quarters:  ";
  cin >> quarters;

  // convert the number of quarters into years
  years = quarters / 4.0;
 
  // calculate the return on investment
  final = (initial * pow(1 + (interest / 100.0), years));

  // Output all of the info.
  cout << "Value of your investment after "<< years << " year(s) is " << final << " dollars. "<< endl;
  cout << "Profit from your investment after " << years << " year(s) is "<< final - initial << " dollars." << endl;

  return(0);
}
