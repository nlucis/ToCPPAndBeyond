#include <iostream>

extern int number;

int main() {
	int num;
	std::cout << "What's kickin' Sky Chicken? Enter your favorite number...:";
	std::cin >> num;
	std::cout << "Oh cool! " << num << " is a good one. My favorite number is " << number << std::endl;
	return 0;
}

