#include <iostream>

using namespace std;

int main() {
  int year;

  cout << "Enter a Year: ";
  cin >> year;

  if (year %4 == 0 && year % 100 != 0 || year %400 == 0) {
    cout << "Year is Leap Year";
  } else {
    cout <<"Year is not Leap ";
  }
  return 0;
}