#include <climits>
#include <iostream>

// Qualified namespace
using std::cout;
using std::cin;

// Global namespace
using namespace std;

// Gets int number variable from Section4.cpp (global scoped)
extern int faveNum;

int main() {
	int num;
	cout << "What's kickin' Sky Chicken? Enter your favorite number...:";
	cin >> num;

	if (num == 0) {
		cerr << "Whoa now, edgelord.";
		return 1;
	}

	if (num != faveNum) {
		cout << "Oh cool! " << num << " is a good one. My favorite number is " << faveNum << "."  << endl;
	}
	else {
		cout << "No way! That's my favorite number too! Seriously! " << faveNum << " is my favorite number!" << endl;
	}

	string div{ "\n************************************\n" };

	extern char mNitial;
	cout << div << "The letter of the day is: " << mNitial << div;

	return 0;
}

