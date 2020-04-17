#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(char a, char b) {
	return a > b;
}

string solution(string s) {
	string answer = "";

	sort(&s, &s + s.size());

	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << endl;
	}

	return answer;
}
