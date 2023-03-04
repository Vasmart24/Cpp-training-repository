#include <iostream>
using namespace std;

int main() {
  unsigned int firstPoints, secondPoints, thirdPoints;
  cout << "write first score: ";
  cin >> firstPoints;
  cout << "write second score: ";
  cin >> secondPoints;
  cout << "write third score: ";
  cin >> thirdPoints;
  cout << "\nYour average Points is " << (firstPoints + secondPoints + thirdPoints) / 3.0 << endl;
  return 0;
}