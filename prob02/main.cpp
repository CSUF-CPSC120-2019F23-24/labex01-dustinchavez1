// This program calculates the user's pay.

#include <iostream>

int main()
{
  double hours, rate, pay;

  // Get the number of hours worked.
  std::cout << "How many candy bars did we sell? ";
  std::cin >> hours;

  // Get the hourly pay rate.
  std::cout << "How much does the organizatinoearn for each bar sold? ";
  std::cin >> rate;

  // Calculate the pay.
  pay = hours * rate;

  // Display the pay.
  std::cout << "The organization has earned $" << pay << std::endl;

  return 0;
}
