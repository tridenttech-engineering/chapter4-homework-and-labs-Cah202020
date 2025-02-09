//Lab4-4.cpp - displays the volume of a cylinder
//created/revised by Christopher Hall on 2/8/25

#include <iostream>
using namespace std;
int main()
{
  //Declare named constants and variables
  const double PI = 3.14;
  double height   = 0.0;
  double radius   = 0.0;
  double volume   = 0.0;

  //enter input item values
  cout << "Height: ";
  cin >> height;
  cout << "Radius: ";
  cin >> radius;

  // calculate and display the volume
  volume = PI * radius * radius * height;
  cout << "Volume: " << volume << endl;

return 0;
} //end of main function
