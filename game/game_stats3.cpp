//// Game Stats 3.0
//// Demonstrates constants
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	const int ALIEN_POINTS = 150;
//	int aliensKilled = 10;
//	int score = aliensKilled * ALIEN_POINTS;
//	cout << "score: " << score << endl;
//
//	enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
//	difficulty myDifficulty = EASY;
//
//	enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};
//	shipCost myShipCost = BOMBER_COST;
//	cout << "\nTo upgrade my ship to a Cruiser will cost " 
//         << (CRUISER_COST - myShipCost) << " Resource Points.\n";
//
//	return 0;
//}
// Designers Network
// Demonstrates logical operators

#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string username;
	string password;
	bool success;

	cout << "\t\tGame Designer's Network\n";

	do
	{
		cout << "\nUsername: ";
		cin >> username; 

		cout << "Password: ";
		cin >> password; 

		if (username == "S.Meier" && password == "civilization")
		{
			cout << "\nHey, Sid.";
			success = true;
		}

		else if (username == "S.Miyamoto" && password == "mariobros")
		{
			cout << "\nWhat's up, Shigeru?";
			success = true;
		}

		else if (username == "W.Wright" && password == "thesims")
		{
			cout << "\nHow goes it, Will?";
			success = true;
		}

		else if (username == "guest" || password == "guest")
		{
			cout << "\nWelcome, guest.";
			success = true;
		}

		else
		{
			cout << "\nYour login failed.";
			success = false;
		}
	} while (!success);

    return 0;
}


