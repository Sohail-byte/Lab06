#include<iostream>
using namespace std;
int main() {
	int inputCode, original, digit, digitCount = 0;
	cout << "Enter code: " << endl;
	cin >> inputCode;
	original = inputCode;	

	int divisor = 1;
	while (inputCode / divisor >= 10) {
		divisor *= 10;
	}
	cout << "Highest decimal place: " << divisor << endl;
	
	while (divisor > 0) {
		digit = (inputCode / divisor) % 10;
		switch (digit) {
		case 0: 
			cout << "Zero" << endl;  
			break;
		case 1: 
			cout << "One" << endl;
			break;
		case 2: 
			cout << "Two" << endl;
			break;
		case 3: 
			cout << "Three" << endl;
			break;
		case 4: 
			cout << "Four" << endl;
			break;
		case 5: 
			cout << "Five" << endl;
			break;
		case 6: 
			cout << "Six" << endl;
			break;
		case 7: 
			cout << "Seven" << endl;
			break;
		case 8: 
			cout << "Eight" << endl;
			break;
		case 9: 
			cout << "Nine" << endl;
			break;
		}

		digitCount++;
		divisor /= 10;
	}

	cout << "Digits spoken: " << digitCount << endl;
	//added the comment for the git change thing

	cout << "This is the new cout function added" << endl;
	return 0;
}