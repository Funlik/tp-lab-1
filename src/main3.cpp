#include <iostream>
#include "task3.h"
using namespace std;

int main(){
	unsigned int value;
	cout << "Write a prime number to find the sum of all primes in front of it\n";
	cin >> value;
	cout << sumPrime(value);
	return 0;
}