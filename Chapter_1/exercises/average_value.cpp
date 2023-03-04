#include <iostream>
using namespace std;

int main() {
  unsigned int firstPoints, secondPoints, thirdPoints;
  cout << "Write first score: ";
  cin >> firstPoints;
  cout << "Write second score: ";
  cin >> secondPoints;
  cout << "Write third score: ";
  cin >> thirdPoints;
  cout << "\nYour average Points is " << (firstPoints + secondPoints + thirdPoints) / 3.0 << endl;
  return 0;
}