#include "task2.h"

bool checkPrime(unsigned int value)
{
	for (int i = 2; i < value; i++)
	{
		if (value % i == 0)
			return false;
	}
	return true;
}

unsigned long long nextPrime(unsigned long value)
{
	value++;
	while (checkPrime(value) == false)
		value++;
	return value;
}

unsigned long long nPrime(unsigned n)
{
	int index = 1;
	long number = 2;

	while (index < n)
	{
		number = nextPrime(number);
		index++;
	}
	return number;
}