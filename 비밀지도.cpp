#include <string>
#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
	vector<string> answer(n, "");

	for (int i = 0; i < n; i++) {
		int temp1 = arr1[i], temp2 = arr2[i], pos = 0;
		for (int j = 0; j < n; j++) {
			if (temp1 / pow(2, n - j - 1) < 1 && temp2 / pow(2, n - j - 1) < 1) {
				pos++;
				answer[i] += ' ';
				continue;
			}
			else if (temp1 % 2 == 1 || temp2 % 2 == 1)
				answer[i] += '#';
			else
				answer[i] += ' ';

			temp1 /= 2, temp2 /= 2;
		}
		reverse(answer[i].begin() + pos, answer[i].end());
	}

    return answer;
}
