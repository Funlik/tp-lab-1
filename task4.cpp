#include "task4.h"
#include <string.h>

char* sum(char *x, char *y)
{
	int lenX = strlen(x);
	int lenY = strlen(y);
	int max = 0,
		rest = 0;
	if (lenX > lenY)
		max = lenX;
	else
		max = lenY;
	char *sum = new char[max];
	char numX, numY;
	char *quanity;
	lenX--;
	lenY--;
	int num = 0;
	for (int i = max - 1; i >= 0; i--, lenX--, lenY--)
	{
		if (lenX >= 0)
			numX = x[lenX];
		else
			numX = '0';
		if (lenY >= 0)
			numY = y[lenY];
		else
			numY = '0';

		sum[i] = ((((numX + numY) - 2 * '0') + rest) % 10) + '0';
		rest = (((numX + numY) - 2 * '0') + rest) / 10;
	}

	if (rest)
	{
		quanity = new char[max + 2];

		for (int i = max; i > 0; i--)
		{
			quanity[i] = sum[i - 1];
		}
		quanity[0] = '1';
		quanity[max + 1] = '\0';
	}
	else        
	{
		quanity = new char[max + 1];
		for (int i = 0; i < max; i++) {
			quanity[i] = sum[i];
		}
		quanity[max] = '\0';
	}
	return quanity;
}