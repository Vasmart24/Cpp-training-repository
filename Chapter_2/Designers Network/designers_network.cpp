#include <iostream>
#include <string>
using namespace std;
int main() {
  string username;
  string password;
  bool success;
  cout << "\tGame Designer's Network\n";
  do {
    cout << "\nUsername: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    if (username == "SergeiKiss" && password == "qwerty") {
      cout << "\nHello, Sergei!\n";
      success = true;
    } else if (username == "Vasmart24" && password == "Basilio") {
      cout << "\nHey yo! Wazzup, Vasyok!\n";
      success = true;
    } else if (username == "teregiray" && password == "clear") {
      cout << "\nPrivetstvyu Smotryashix!\n";
      success = true;
    } else if (username == "guest" || password == "guest") {
      cout << "\nWelcome, guest.\n";
      success = true;
    } else {
      cout << "\nYour login failed.\n";
      success = false;
    }
  } while (!success);
  return 0;
}