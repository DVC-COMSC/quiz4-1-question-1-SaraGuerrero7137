// Complete this program

#include <iostream>
using namespace std;
int main() {
  int selection;

  int radius;
  int pi;
  int length;
  int width;
  int base;
  int height;

  cout << "Which formula do you want to see?\n\n";
  cout << "1. Area of a circle\n";
  cout << "2. Area of a rectangle\n";
  cout << "3. Area of a triangle\n";
  cout << "4. None of them!\n";
  cin >> selection;

  switch (selection) {
  case 1:
    cout << "Enter value of pi and radius\n";
    cin >> pi >> radius;
    break;
  case 2:
    cout << "Enter value of Length and width\n";
    cin >> length >> width;
    break;
  case 3:
    cout << "Enter value of base and height\n";
    cin >> base >> height;
    break;
  case 4:
    cout << "Well okay then, good bye!\n";
    break;
  default:
    cout << "Not good with numbers\n";
  }

  switch (selection) {