#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
	vector<int> answer;

	vector<pair <int, int>> score;

	for (int i = 0; i < 3; i++)
		score.push_back(make_pair(0, i + 1));


	int no2[] = { 2,1,2,3,2,4,2,5 };
	int no3[] = { 3,3,1,1,2,2,4,4,5,5, };

	for (int i = 0, size = answers.size(); i < size; i++) {
		if (i % 5 + 1 == answers[i])
			score[0].first++;
		if (no2[i % 8] == answers[i])
			score[1].first++;
		if (no3[i % 10] == answers[i])
			score[2].first++;
	}

	sort(score.begin(), score.end());

	for (int i = 2; i >= 0; i--) {
		answer.push_back(score[i].second);
		if (i > 0 && score[i].first != score[i - 1].first)
			break;
	}

	sort(answer.begin(), answer.end());

	return answer;
}

int main() {

	vector <int> answer = { 1,3,2,4,5 };

	solution(answer);

}