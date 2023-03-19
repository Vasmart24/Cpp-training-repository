#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  cout << "Welcome to your favorite games list!\n";
  cout << "Here's the allowed commands:\n\n";
  cout << "command 'add', make you add new game header to the list\n"
  << "command 'delete', make you delete any header from the list\n"
  << "command 'show', show your headers on the screen :)\n"
  << "command 'exit' throw you out from the game.";
  vector<string> headers;
  cout << "Please, write your command: ";