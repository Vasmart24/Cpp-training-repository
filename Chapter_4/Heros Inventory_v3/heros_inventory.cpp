#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main() {
  vector<string> inventory;
  inventory.emplace_back("sword");
  inventory.emplace_back("armor");
  inventory.emplace_back("shield");
  vector<string>::iterator myIterator;
  vector<string>::const_iterator iter;
  cout << "\nYour items: \n";
  for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
    cout << *iter << endl;
  }
  cout << "\nYou trade your sword for а battle ахе. ";
  myIterator = inventory.begin();
  *myIterator = "battle axe";
  cout << "\nYour items: \n";
  for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
    cout << *iter << endl;
  }
  cout << "\nThe item name '" << *myIterator << "' has ";
  cout << (*myIterator).size()<< " letters in it.\n";
  cout << "\nThe item name '" << *myIterator << "' has ";
  cout << myIterator->size() << " letters in it.\n";
  cout << "\nYou recover a crossbow from a slain enemy. ";
  inventory.insert(inventory.begin(), "crossbow");
  cout << "\nYour items: \n";
  for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
    cout << *iter << endl;
  }
  cout << "\nYour armor is destroyed in а fierce battle. ";
  inventory.erase(inventory.begin() + 2);
  cout << "\nYour items: \n";
  for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
    cout << *iter << endl;
  }
  return 0;
}   