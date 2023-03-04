#include <iostream>
using namespace std;
int main() {
	cout << "Difficulty Levels\n\n";
	enum difficulties { EASY = 1, NORMAL, HARD };
	int choice;
	cout << "Choice: ";
	cin >> choice;
	switch (choice) {
		case EASY:
			cout << "You picked Easy. \n";
		break;
		case NORMAL:
			cout << "You picked Normal. \n";
		break;
		case HARD:
      cout << "You picked Hard. \n";
		break;
		default:
			cout << "You made and illegal choice. \n";
}
return 0;
}
