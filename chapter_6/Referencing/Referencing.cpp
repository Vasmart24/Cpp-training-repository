#include <iostream>
using namespace std;

int main() {
  int myScore = 1000;
  int& mikesScore = myScore;
  cout << "My score is: " << myScore << "\n"
       << "Mikes score is: " << mikesScore << "\n\n";

  cout << "Adding 500 to my score.\n";
  myScore += 500;
  cout << "My score is: " << myScore << "\n"
       << "Mikes score is: " << mikesScore << "\n\n";

  cout << "Adding 500 to Mikes score.\n";
  mikesScore += 500;
  cout << "My score is: " << myScore << "\n"
       << "Mikes score is: " << mikesScore << "\n\n";
  return 0;
}
