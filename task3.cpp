#include <iostream>
#include "task3.h"
#include "math.h"
using namespace std;

unsigned long long sumPrime(unsigned int hbound){
	unsigned current = 3;
	unsigned long long s = 0;
	int flag;
	if (hbound>2)
		s = 2;
	while (current<hbound){
		flag = 0;
		if (current % 2 == 0) {
			current++;
			continue;
		}
		for (int i = 3; i <= sqrt(current); i += 2){
			if (current%i == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			s += current;
		current++;
	}
	return s;
}