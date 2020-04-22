#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

long long solution(long long n) {
	double temp = sqrt(n);
	long long answer = temp;

	if (answer - temp < 0)
		return -1;

	return pow(answer + 1, 2);
}
