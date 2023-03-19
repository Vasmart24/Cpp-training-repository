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
  << "command 'exit' throw you out from the game.\n\n";
  vector<string> headers;
  vector<string>::iterator iter;
  int currCmd;
  string gameName;
  do {
    cout << "Please, write your command: ";
    cin >> currCmd;
    switch (currCmd) {
    case 1:
      cout << "\nGames List: \n";
      if (headers.empty()) {
        cout << "The list is empty." << endl;
      } else {
        for (iter = headers.begin(); iter != headers.end(); ++iter) {
          cout << *iter << endl;
        }
      }
      break;
    
    case 2:
        cout << "Please, write the header of the game: ";
        cin >> gameName;
      iter = find(headers.begin(), headers.end(), gameName);
      if (iter == headers.end()) {
        cout << "This header is in list already." << endl;
        break;
      }
      headers.insert(headers.end(), gameName);
      cout << "The header successfully added!";
      break;

    case 3:
      cout << "Please, write the header of the game: ";
      cin >> gameName;
      iter = find(headers.begin(), headers.end(), gameName);
      if (iter == headers.end()) {
        cout << "This header doesn't exist in the list." << endl;
        break;
      }
      headers.erase(iter);
      cout << "The header successfully removed!";
      break;
    
    default:
      cout << "There is no such command." << endl;
      break;
  }
} while (currCmd != 4);

cout << "Good Bye!" << endl;
return 0;
}