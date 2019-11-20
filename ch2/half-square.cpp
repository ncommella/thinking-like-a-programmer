#include <iostream>
using namespace std;

int main () {
	
	for (int row = 0; row < 5; row ++) {
		for (int hashNum = 0; hashNum < 5 - row; hashNum++) {
			cout << "#";		
		}
		cout << "\n";
	}

	return 0;
}
