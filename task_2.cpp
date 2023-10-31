#include<iostream>
using namespace std;

int main()
{
	int factorial = 1;
	int numb;
	cout << "enter a whole number" << endl;
	cin >> numb;
	if (numb < 0) {
		cout << "invalid results" << endl;
	}
	else {
		for (int i = 1; i <= numb; i++) {
			factorial *= i;
		}
		cout << "factorial of a number" << numb << "is" << "=" << factorial << endl;
	}
	return 0;
}