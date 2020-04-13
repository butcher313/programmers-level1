#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";

	sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());
	
	for (int i = 0, size = completion.size(); i < size; i++) {

		if (participant[i].compare(completion[i])) {
			answer = participant[i];
			return answer;
		}
	}

	answer = participant.back();

	cout << answer;

	return answer;
}

int main() {

	vector <string> participant = { "leo", "kiki", "eden" };
	vector <string> completion = { "eden", "kiki" };

	solution(participant, completion);


}
