//
// Created by ВЧ on 25.02.2023.
//

#include <iostream>
using namespace std;
int main()
{
  const int ALIENS_POINTS = 150;
  int aliensKilled = 10;
  int score = ALIENS_POINTS * aliensKilled;
  cout << "score: " << score << endl;
  enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
  difficulty myDifficulty = EASY;
  enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};
  shipCost myShipCost = BOMBER_COST;
  cout << "\nTo upgrade my ship to a Cruiser will cost "
  << (CRUISER_COST - myShipCost) << " Resource Points.\n";
  return 0;
}
