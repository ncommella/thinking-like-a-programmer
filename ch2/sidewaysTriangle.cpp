#include <iostream>
using namespace std;

int main () {

	for (int row = 1; row <= 7; row++) {
		for (int hashNum = 0; hashNum < 4 - abs(row - 4); hashNum++) {
			cout << "#";		
		}
		cout << "\n";
	}

	return 0;
}