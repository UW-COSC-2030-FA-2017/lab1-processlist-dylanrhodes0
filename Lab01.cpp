// ############
// Dylan Rhodes
// Lab 01
// COSC 2030
// ############

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	// First number read from file
	double firstNum = 0.0;
	// Second number read from file
	double secondNum = 0.0;
	// Number before last read from file
	double almostlastNum = 0.0;
	// Last number read from file
	double lastNum = 0.0;
	// Count of how many numbers are in the file
	int countNum = 0;

	string fileName;
	ifstream numbers;
	double input;
	cout << "Please enter a filename: ";
	cin >> fileName;
	cout << endl;
	numbers.open(fileName);

	// Go through file while it can set a value for input
	while (numbers >> input) {
		if (countNum == 0) {
			firstNum = input;
		} else if (countNum == 1) {
			secondNum = input;
		} else {
			almostlastNum = lastNum;
			lastNum = input;
		}
		countNum++;
	}
	numbers.close();
	
	// Display results
	cout << endl << "***** Number read from file *****" << endl;
	cout << "Total numbers: " << countNum << endl;
	cout << "First number: " << firstNum << endl;
	cout << "Second number: " << secondNum << endl;
	cout << "Number before last: " << almostlastNum << endl;
	cout << "Last number: " << lastNum << endl << endl;

	system("PAUSE");
	return 0;
}