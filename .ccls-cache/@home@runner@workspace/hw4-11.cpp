// Introductory11.cpp - displays ending balance
// Created/revised by Christopher Hall on 2/8/25

#include <iostream>
using namespace std;

int main() {
  //declare named constants and variables
  double beginningBalance = 0.0;
  double deposits = 0.0;
  double withdrawals = 0.0;

  //enter input items
  cout << "Beginning balance: ";
  cin >> beginningBalance;
  cout << "Deposits: ";
  cin >> deposits;
  cout << "Withdrawals: ";
  cin >> withdrawals;

  //calculate and display the end of the month balance
  cout << "Ending balance: $" << (beginningBalance + deposits - withdrawals) << endl;
  
  return 0;
} // end of main function