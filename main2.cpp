#include "task2.h"

int main()
{
	unsigned int value;
	unsigned long long value2;
	unsigned value3;

	//prime numder or not
	cout << "Enter the number to check" << endl;
	cin >> value;
	if (checkPrime(value) == false)
		cout << "False" << endl;
	else
		cout << "True" << endl;

	//the next prime number
	cout << "Enter the value" << endl;
	cin >> value2;
	cout << nextPrime(value2) << endl;

	//finding a prime number
	cout << "Enter an index" << endl;
	cin >> value3;
	cout << nPrime(value3) << endl;

	return 0;
}