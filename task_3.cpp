#include<iostream>
using namespace std;

int main()
{
	int decimalnumber;
	cout << "enter a deciaml number:";
	cin >> decimalnumber;

	if (decimalnumber < 0) {
		cout << "not defined for octal numbers" << endl;
	}
	else {
		int octalnumber = 0;
		int placevalue = 1;

		do {
			octalnumber += (decimalnumber % 8) * placevalue;
			decimalnumber /= 8;
			placevalue *= 10;
		} while (decimalnumber > 0);
		cout << "octal representation:" << octalnumber << endl;
	}
	return 0;
}