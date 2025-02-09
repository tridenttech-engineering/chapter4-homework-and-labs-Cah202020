// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by Christopher Hall on 2/8/25

#include <iostream>
using namespace std;

int main() {

  //declare named variables
  int small = 0;
  int medium = 0;
  int large = 0;
  int family = 0;
  int total = 0;
  double smallPercent = 0.0;
  double mediumPercent = 0.0;
  double largePercent = 0.0;
  double familyPercent = 0.0;

  //enter input items
  cout << "Small pizzas ";
  cin >> small;
  cout << "Medium pizzas ";
  cin >> medium;
  cout << "Large pizzas ";
  cin >> large;
  cout << "Family pizzas ";
  cin >> family;

  //calculate totals and percentages
  total = small + medium + large + family;
  smallPercent = static_cast<double>(small) / total * 100;
  mediumPercent = static_cast<double>(medium) / total * 100;
  largePercent = static_cast<double>(large) / total * 100;
  familyPercent = static_cast<double>(family) / total * 100;
  
  //display the total anmd percentages
  cout << "Total sold: " << total << endl;
  cout << "Small pizzas: " << smallPercent << "%" << endl;
  cout << "Medium pizzas: " << mediumPercent << "%" << endl;
  cout << "Large pizzas " << largePercent << "%" << endl;
  cout << "Family pizzas: " << familyPercent << "%" << endl;
  
  return 0;
} // end of main function