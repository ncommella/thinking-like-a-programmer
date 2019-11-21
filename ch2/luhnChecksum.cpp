#include <iostream>
using namespace std;

//prototypes
int doubleDigitValue(int);
void numberReading(void);

int main () {
	numberReading();
	return 1;
}

int doubleDigitValue (int digit) {
	int doubledDigit = digit * 2;
	int sum;
	if (doubledDigit < 10) sum = doubledDigit;
	else sum = 1 + (doubledDigit % 10);
	return sum;
}

void numberReading () {
	string numString;
	bool isEvenLength;
	int luhnSum = 0;
	cout << "Enter a number of an arbitrary length: " << "\n";
	cin >> numString;

	//determine if length of the number is even or odd
	if (numString.length() % 2 == 0)
		isEvenLength = true;
	else
		isEvenLength = false;

	//convert number chars to number ints while going from right to left
	//TODO: separate this into a function
	for (int i = numString.length() - 1; i >= 0; i--) {
		int curDigit = int(numString[i]) - 48;
		if (isEvenLength)
			if (i % 2 == 0)
				luhnSum += doubleDigitValue(curDigit);
			else
				luhnSum += curDigit;
		else if (i % 2 == 0)
			luhnSum += curDigit;
		else
			luhnSum += doubleDigitValue(curDigit);
		//cout << "I: " << i << "\n";
		//this sends, need to determine which to send to double
		//cout << curDigit << " - Sum of doubled digits = " << doubleDigitValue(curDigit) << "\n"; // sends each digit to doubleDigitValue() as they are read from right to left

	}
	cout << "The Luhn Sum of " << numString << " is " << luhnSum << "\n";
}
