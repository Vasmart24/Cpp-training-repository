#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  cout << "Welcome to your favorite games list!\n";
  cout << "Here's the allowed commands:\n\n";
  cout << "command '1' - show your headers on the screen\n"
  << "command '2' - add new game header to the list\n"
  << "command '3' - delete any header from the list\n"
  << "command '4' - exit.\n";
  vector<string> headers;
  vector<string>::iterator iter;
  int currCmd;
  string gameName;
  bool isStrSame;
  do {
    cout << "\nPlease, write your command: ";
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
        if (iter != headers.end()) {
        cout << "This header is already in the list." << endl;
       break;
       }
        headers.push_back(gameName);
        cout << "The header successfully added!\n";
      break;

    case 3:
    if (headers.empty()) {
    cout << "The list is empty." << endl;
    break;
    }
      cout << "Please, write the header of the game: ";
      cin >> gameName;
      iter = find(headers.begin(), headers.end(), gameName);
      if (iter == headers.end()) {
        cout << "This header doesn't exist in the list." << endl;
        break;
      }
      headers.erase(iter);
      cout << "The header successfully removed!\n";
      break;

    default:
    cout << "There is no such command." << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
     break;
  }
} while (currCmd != 4);

cout << "Good Bye!" << endl;
return 0;
}