#include <ctime>
#include <iostream>
#include <string>

using namespace std;
void playHand();

int main() {
	srand(time(NULL));
	string playAgain = "y";

	while (playAgain == "y" || playAgain == "yes") {
		playHand();

		cout << endl;
		cout << "Play again?";
		cin >> playAgain;
	}
}

int RandomCards(int i, int j) {
	return 1 + rand() % (j - i + 1);
}

int dealCards(int numCards, string cheese) {
	int cardVal = 0;
	int totalVal = 0;

	cout << cheese;

	for (int i = 1; i <= numCards; i++) {
		cardVal = RandomCards(1, 10);
		totalVal += cardVal;
		cout << cardVal << " ";
	}
	return totalVal;
}

void findWin(int playerCards, int dealerCards) {
	cout << "Your Total: " << playerCards << endl;
	cout << "Dealer's Total: " << dealerCards << endl;

	if (playerCards == dealerCards) {
		cout << "Dealer Wins" << endl;
	} else if (
		(playerCards == 21 || playerCards > dealerCards || dealerCards > 21) &&
		(playerCards <= 21)) {
		cout << "You Win" << endl;
	} else {
		cout << "Dealer Wins" << endl;
	}
}

void hit(int &player) {
	string response = "yes";

	while (response == "y" || response == "yes") {
		if (player < 21) {
			cout << "Hit?";
			cin >> response;

			if (response == "yes" || response == "y") {
				player += dealCards(1, "You Hit ");
				cout << endl << "Card Total: " << player << endl;
			} else {
				response = "n";
			}
		} else if (player > 21) {
			cout << "You went over 21, Dealer wins";
			response = "n";
		} else if (player == 21) {
			response = "n";
		}
	}
}

void playHand() {
	int player = dealCards(2, "Your Cards: ");
	cout << endl;
	int dealer = dealCards(2, "Dealer's Cards: ");
	cout << endl;
	hit(player);
	cout << endl;

	while ((dealer < player) && (dealer < 21) && (player <= 21)) {
		dealer += dealCards(1, "Dealer takes a card, ");
		cout << endl;
	}

	findWin(player, dealer);
}
