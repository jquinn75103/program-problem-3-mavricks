/*Aaron Pandain, Max Gerber, & Vikram Basude
Three Digit Ascend Descend Selection
Brief Discription - We wil use selection data types to put in order digits from a three digit number in ascending or descending order.
*/

#include <iostream>
#include <conio.h>

using namespace std;

void pause() {
	
	cout << " Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

void main() {
	int user_numb;
	int first_digit;
	int second_digit;
	int third_digit;
	
	cout << "Enter any positive 3 digit integer : ";
	cin >> user_numb;

	third_digit = user_numb % 10;
	second_digit = (user_numb / 10) % 10;
	first_digit = user_numb / 100;

	if (first_digit > second_digit && second_digit > third_digit) {
		cout << "The number is in Descending order.";
		}

	else if (first_digit < second_digit && second_digit < third_digit) {
		cout << "The number is in Ascending order.";
	}

	else {
		cout << "The number is neither in Ascending or Descending order.";
	}

	pause();

}
 



