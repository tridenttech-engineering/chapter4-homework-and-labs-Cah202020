//Lab4-2.cpp - displays a salesperson's commission
//created/revised by Christopher Hall on 2/8/25
#include <iostream>
using namespace std;
int main()
{
//declare named constant and variables
  double sales = 0.0;
  const double COMM_RATE = 0.1;
  double commission = 0.0;
  //enter input values
  cout << "Sales amount: ";
  cin >> sales;
//calculate and display the commission
  commission = sales * COMM_RATE;
  cout << "Commission: $" << commission << endl;

  return 0;
} //end of main function
/*
Sales amount: 1328.50
Commission: $132.85
Press any key to continue . . .
*/
/*
second desk check Sales amount $5,234.00
Commission: $523.40
  */