#include <iostream>
using namespace std;

int main () 
{
	cout << "Enter a three or four-digit number: ";
	
	char digitChar = cin.get();
	int number = (digitChar - '0') * 100;
	
	digitChar = cin.get();
	number += (digitChar - '0') * 10;

	digitChar = cin.get();
	number += (digitChar - '0');

	digitChar = cin.get();
	if (digitChar == 10) {
		cout << "The number is: " << number << "\n";
	} else {
		number = (number *10) + (digitChar - '0');
		cout << "The number is: " << number << "\n";
	}
}
