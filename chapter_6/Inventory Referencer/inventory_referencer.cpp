#include <iostream>
#include <string>
#include <vector>
using namespace std;

string& refToElement(vector<string>& inventory, int i) {
  return inventory[i];
}

int main() {
  vector<string> inventory;
  inventory.emplace_back("sword");
  inventory.emplace_back("armor");
  inventory.emplace_back("shield");
  cout << "Sending the returned reference to cout:\n"
  << refToElement(inventory, 0) << "\n\n";
  cout << "Assigning the returned reference yo another reference.\n";
  string& rStr = refToElement(inventory, 1);
  cout << "Sending the new reference to cout:\n";
  cout << rStr << "\n\n";
  cout << "Assigning the returned reference to a string object.\n";
  string str = refToElement(inventory, 2);
  cout << "Sending the new string object to cout:\n"
       << str << "\n\n";
  cout << "Altering an object through a returned reference.\n";
  rStr = "Healing Potion";
  cout << "Sending the altered object to cout:\n"
       << inventory[1] << endl;
  return 0;
}


