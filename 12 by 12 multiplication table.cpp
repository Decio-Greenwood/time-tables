#include <iostream>
using namespace std;

void printMult (int sideNum){ /*Prints out a line of multiplication till 12 with the initial term*/
	cout << endl << sideNum;
	for (int topNum=1; topNum<=12; topNum++){
		cout << "	" << sideNum * topNum;
	}
}

/*Prints out a 12 by 12 multiplication table, going line by line*/

int main () {
	cout << "X";
	for (int topNum=1; topNum<=12; topNum++){ /*Prints out the upper numbers for reference*/
		cout << "	" << topNum;
	}
	for (int lines=1; lines<=12; lines++) { /*Runs the print 12 times*/
		printMult (lines);
	}
	return 0;
}