#include <iostream>
using namespace std;
void badSwap(int x, int y);
void goodSwap(int& x, int& y);

int main() {
  int myScore = 150;
  int yourScore = 1000;
  cout << "Original values\n"
       << "Your score: " << yourScore << "\n"
       << "My score: " << myScore << "\n\n";
  cout << "Calling badSwap()\n";
  badSwap(myScore, yourScore);
  cout << "Your score: " << yourScore << "\n"
       << "My score: " << myScore << "\n\n";
  cout << "Calling goodSwap()\n";
  goodSwap(myScore, yourScore);
  cout << "Your score: " << yourScore << "\n"
       << "My score: " << myScore << "\n";
  return 0;
}

void badSwap(int x, int y) {
  int temp = x;
  x = y;
  y = temp;
}

void goodSwap(int& x, int& y) {
  int temp = x;
  x = y;
  y = temp;
}