#include<iostream>
using namespace std;

int main()
{
	char choice;

	do {
		float number1, number2, result;
		char op;


		cout << "enter the first number:";
		cin >> number1;

		cout << "enter an operator( +,-,*,/):";
		cin >> op;

		cout << "enter the second: ";
		cin >> number2;

		switch (op) {
		case'+':
			result = number1 + number2;
			break;

		case'-':
			result = number1 - number2;
			break;

		case'*':
			result = number1 * number2;
			break;

		case'/':
			if (number2 != 0) {
				result = number1 / number2;
			}
			else {
				cout << "invalid result" << endl;
				return 1;
			}
			break;
		default:
			cout << "invalid operator" << endl;
			return 1;
		}

		cout << "result:" << number1 << " " << op << " " << number2 << "=" << result << endl;

		cout << "do another calculation? (y/n):";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
	return 0;
}