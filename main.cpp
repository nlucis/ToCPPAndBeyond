#include <iostream>
using namespace std;

// Gets int number variable from Section4.cpp
extern int number;

int main() {
	int num;
	cout << "What's kickin' Sky Chicken? Enter your favorite number...:";
	cin >> num;
	cout << "Oh cool! " << num << " is a good one. My favorite number is " << number << endl;
	return 0;
}

