#include<iostream>
using namespace std;

int main()
{
	int number = 1;
	do {
		cout << number << " ";
		number *= 2;
	} while (number <= 512);
	cout << endl;
	return 0;
}