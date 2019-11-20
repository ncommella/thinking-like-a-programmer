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
	cout << "Enter a number of an arbitrary length: " << "\n";
	cin >> numString;
	for (int i = numString.length() - 1; i >= 0; i--) {
		int curDigit = int(numString[i]) - 48; // subtracts difference in character codes to get accurate number in integerr form
		cout << "I: " << i << "\n";
		cout << curDigit << " - Sum of doubled digits = " << doubleDigitValue(curDigit) << "\n"; // sends each digit to doubleDigitValue() as they are read from right to left

	}
	
}

void whichDouble () {
	
}