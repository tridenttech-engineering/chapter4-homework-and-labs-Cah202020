//Lab4-3.cpp - displays a salesperson's commission
//created/revised by Christopher Hall on 2/8/25

#include <iostream>
using namespace std;

int main()
{
  //declare named constant and variables
  double commissionRate = 0.0;
  double sales = 0.0;
  double commission = 0.0;

  //enter input item
  cout << "Sales amount: ";
  cin >> sales;
  cout << "Enter Commission rate as a decimal: ";
  cin >> commissionRate;

  //calculate and display the commision
  commission = sales * commissionRate;
  cout << "Commission: $" << commission << endl;

  return 0;

} //end of main function
