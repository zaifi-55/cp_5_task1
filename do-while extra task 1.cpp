#include<iostream>
using namespace std;

int main()
{
	int number = 7;

	do {
		cout << number << " ";
		number += 7;
	} while (number <= 98);
	
	cout << endl;
	return 0;
}