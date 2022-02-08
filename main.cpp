#include <climits>
#include <iostream>

// Qualified namespace
using std::cout;
using std::cin;

// Global namespace
using namespace std;

/*
	Methods for outputting a statement
	about each primitive type from an external variable.
*/
string divider{ "\n************************************\n" };
void charStatement(string intro, char value) {
	string statement{ divider + intro + " " + value + divider };
	cout << statement << endl;
}
void stringStatement(string intro, string value) {
	string statement{};
	cout << statement << endl;
}

int main() {

	extern char mNitial;
	charStatement("The letter of the day is: ", mNitial);

	return 0;
}

