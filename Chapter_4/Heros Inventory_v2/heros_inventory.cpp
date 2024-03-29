#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main() {
  vector<string> inventory;
  inventory.emplace_back("sword");
  inventory.emplace_back("armor");
  inventory.emplace_back("shield");
  cout << "You have "<< inventory.size() << " items.\n";
  cout << "\nYour items: \n";
  for (unsigned int i = 0; i < inventory.size(); ++i) {
    cout << inventory[i] << endl;
  }
  cout << "\nYou trade your sword for а battle ахе. ";
  inventory[0] = "battle axe";
  cout << "\nYour items: \n";
  for (unsigned int i = 0; i < inventory.size(); ++i) {
    cout << inventory[i] << endl;
  }
  cout << "\nThe item name '" << inventory[0] << "' has ";
  cout << inventory[0].size() << " letters in it.\n";
  cout << "\nYour shield is destroyed in а fierce battle. ";
  inventory.pop_back();
  cout << "\nYour items: \n";
  for (unsigned int i = 0; i < inventory.size(); ++i) {
    cout << inventory[i] << endl;
  }
  cout << "\nYou were robbed of all of your possessions bу а thief.";
  inventory.clear();
  if (inventory.empty()){
    cout << "\nYou have nothing. \n";
  }
  else {
    cout << "\nYou have at least one item.\n";
  }
  return 0;
}   