#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int i;
bool compare(string a, string b) {
	if (a[i] == b[i])
		return a < b; //오름차순
	else
		return a[i] < b[i];
}

vector<string> solution(vector<string> strings, int n) {
	vector<string> answer;
	i = n;

	//compare은 오름차순 혹은 내림차순 
	sort(strings.begin(), strings.end(), compare);

	for (int i = 0; i < strings.size(); i++)
		cout << stirngs[i] << " ";
	cout << endl;

	return strings;
}

int main() {
	
	vector <string> strings = { "abc", "cbc", "nbc","cdc", "acc", "adb",  "aca", "acb" };
	//strings = { "cb", "ab", "bc", "ac" };

	solution(strings, 1);
}