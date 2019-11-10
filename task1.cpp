#include <iostream>
#include "task1.h"
using namespace std;

unsigned long gcd(unsigned int a, unsigned int b){
	unsigned long tmp;
	while (b){
		tmp = a;
		a = b;
		b = tmp%b;
	}
	return a;
}

unsigned long lcm(unsigned long a, unsigned long b){
	return a / gcd(a, b)*b;
}

unsigned long findValue(unsigned int min, unsigned int max) {
	unsigned long value = 1;
	for (unsigned int i = min; i < max + 1; i++) {
		value = lcm(value, i);
	}
	return value;
}