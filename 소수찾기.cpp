#include <string>
#include <vector>
#include <unordered_map>
#include <cmath>

using namespace std;

int solution(int n) {
 	int answer = 0;

	vector <int> prime = { 2 };

	int judge;
	for (int i = 3; i <= n; i++) {
		judge = 1;
		for (int j = 0; prime[j] <= sqrt(i); j++) {
			if (i % prime[j] == 0) {
				judge = 0;
				break;
			}
		}
		if (judge)
			prime.push_back(i);
	}

	return prime.size();
}
