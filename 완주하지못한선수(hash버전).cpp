#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";

	unordered_map <string, int> participants;

	for (string name : participant)
		participants[name];

	for (string name : completion)
		--participants[name];

	for (auto pair : participants) {
		if (pair.second > 0) {
			answer = pair.first;
		}
	}

	return answer;
}

int main() {

	vector <string> participant = { "leo", "kiki", "eden" };
	vector <string> completion = { "eden", "kiki" };

	solution(participant, completion);


}
