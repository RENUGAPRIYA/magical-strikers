#include <iostream>
#include <string>
#include <cstdlib> 
using namespace std;

bool die(const string & msg);

int main() {

	int num, sum = 0;

	cout << "Enter a positive integer: ";
	cin >> num; 
	cout << endl;

	unsigned divisible = (num - num / 7 * 7 == 0);

	if (divisible == 1)
		cout << "It's divisible by 7" << endl;
	else

	do {
		
		
		cin >> num; 
		cout << endl;

			if (!cin)
				cout << "That's not a number, try again: ";
			else
				cout << "It's not divisible by 7, try again: " << endl;

		
		}

	while (divisible == 0);
		

}

bool die(const string & msg)

{
	cout << "Fatal Error: " << msg << endl;

	exit(EXIT_FAILURE);

}
