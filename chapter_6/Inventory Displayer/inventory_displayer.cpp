#include <iostream>
#include <string>
#include <vector>
using namespace std;

void display(const vector<string>& vec);

int main() {
  vector<string> inventory;
  inventory.emplace_back("sword");
  inventory.emplace_back("armor");
  inventory.emplace_back("shield");
  display(inventory);
  return 0;
}

void display(const vector<string>& vec) {
  cout << "Your items:\n";
  for (const auto & iter : vec) {
    cout << iter << endl;
  }
}
