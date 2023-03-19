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

  do {
  cout << "Please, write your command: ";
  switch (currCmd) {
    case "show":
      cout << "\nGames List: \n";
      for (iter = headers.begin(); iter != headers.end(); ++iter) {
        cout << *iter << endl;
      }
      break;
    
    case "add":
      string gameName;
      cout << "Please, write the header of the game: "
      cin >> gameName;
      iter = find(headers.begin(), headers.end(), gameName);
      if (iter === headers.end()) {
        cout << "This header is in list already." << endl;
        break;
      }
      headers.insert(gameName);
      cout << "The header succesfully added!";

    case: "delete":
      string gameName;
      cout << "Please, write the header of the game: "
      cin >> gameName;
      iter = find(headers.begin(), headers.end(), gameName);
      if (iter === headers.end()) {
        cout << "This header doesn't exist in the list." << endl;
        break;
      }
      headers.erase(gameName);
      cout << "The header succesfully removed!";
  }
} while (currCmd !== "exit");

cout << "Good Bye!" << endl;
return 0;
}