#include <iostream>
using namespace std;

int main () 
{
	cout << "Enter a three or four-digit number: ";
	
	char digitChar = cin.get();
	int threeDigitNumber = (digitChar - '0') * 100;
	int fourDigitNumber	= (digitChar - '0') * 1000;
	
	digitChar = cin.get();
	threeDigitNumber += (digitChar - '0') * 10;
	fourDigitNumber += (digitChar - '0') * 100;

	digitChar = cin.get();
	threeDigitNumber += (digitChar - '0');
	fourDigitNumber += (digitChar - '0') * 10;

	digitChar = cin.get();
	if (digitChar == 10) {
		cout << "Three-digit number is: " << threeDigitNumber << "\n";
	} else {
		fourDigitNumber += (digitChar - '0');
		cout << "Four-digit number is: " << fourDigitNumber << "\n";
	}
}
