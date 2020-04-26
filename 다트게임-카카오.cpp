#include <string>
#include <cmath>
#include <vector>

using namespace std;

int solution(string dartResult) {
	int answer = 0;

	//정수, 문자, 특수기호 분류를 해야함. 

	vector <int> temp;
	int index = -1;
	for (int i = 0; i < dartResult.size(); i++) {
		if('*' - dartResult[i] >= 0) {
			switch (dartResult[i]) {
				case '*':
					if (index > 0)
						temp[index - 1] *= 2;
					temp[index] *= 2;
					break;
				case '#':
					temp[index] *= -1;
			}
		}
		else if ('9' - dartResult[i] >= 0) {
			if (dartResult[i + 1] == '0') {
				temp.push_back(10); i++; index++; continue;
			}
			temp.push_back(dartResult[i] - '0');
			index++;
		}
		else {
			switch (dartResult[i]) {
			case 'S':
				break;
			case 'D':
				temp.back() = pow(temp.back(), 2);
				break;
			case 'T':
				temp.back() = pow(temp.back(), 3);
				break;
			}
		}
	}

	for (int i = 0; i < temp.size(); i++)
		answer += temp[i];

	return answer;
}
