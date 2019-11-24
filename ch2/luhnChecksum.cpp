#include <iostream>
using namespace std;

//prototypes
int doubleDigitValue(int);
void getAndReadNumber(void);
bool luhnValidation(bool, string);

int main () {
	getAndReadNumber();
	return 1;
}

int doubleDigitValue (int digit) {
	int doubledDigit = digit * 2;
	int sum;
	if (doubledDigit < 10) sum = doubledDigit;
	else sum = 1 + (doubledDigit % 10);
	return sum;
}

void getAndReadNumber () {
	string userStr;

	cout << "Enter a number of an arbitrary length: " << "\n";
	cin >> userStr;

	//determine if length of the number is even or odd & send to luhn function
	if (userStr.length() % 2 == 0)
		luhnValidation(true, userStr);
	else
		luhnValidation(false, userStr);
}

bool luhnValidation (bool isEvenLength, string numString) {
	int luhnSum = 0;
	bool isValidLuhn;

	//convert number chars to number ints while going from right to left
	for (int i = numString.length() - 1; i >= 0; i--) {
		int curDigit = int(numString[i]) - 48;
		//if number is even length, digits in even position will be doubled, and the reverse for odd length numbers
		if (isEvenLength)
			if (i % 2 == 0)
				luhnSum += doubleDigitValue(curDigit);
			else
				luhnSum += curDigit;
		else if (i % 2 == 0)
			luhnSum += curDigit;
		else
			luhnSum += doubleDigitValue(curDigit);
	}

	if (luhnSum % 10 == 0) {
		isValidLuhn = true;
		cout << "The Luhn Sum of " << numString << " is " << luhnSum << "; therefore, it is a valid Luhn Checksum." << "\n";
		return isValidLuhn;
	}
	else {
		isValidLuhn = false;
		cout << "The Luhn Sum of " << numString << " is " << luhnSum << "; therefore, it is NOT a valid Luhn Checksum." << "\n";
		return isValidLuhn;
	}
}
