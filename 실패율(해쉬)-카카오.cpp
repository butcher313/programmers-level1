#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool compare(pair<int ,float> a, pair<int, float> b) {
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
	vector<int> answer;

	unordered_map <int, float> clear;

	//인덱스는 0부터 n-1까지인 걸로 
	for (int i = 0; i < N; i++)
		clear[i];

	/*stages를 오름차순 하고 x 스테이지에서 대기 중인 수 나누기
	중복되는 x중 마지막 x의 인덱스를 stages.size()에서 뺸 것 한다.
	ex) 1,2,2,2,3,3,4,6에서 2 세개, 첫 2의 인덱스는 1, 8-1 = 7
	따라서 실패 확률 = 3/7이다. 이걸 위의 해쉬에 넣으면 된다.
	*/
	
	sort(stages.begin(), stages.end());
	int index = 0;
	int temp = stages[0] - 1;
	for (int i = 0; i < stages.size(); i++) {
		if (temp != stages[i] - 1) {
			clear[temp] /= (stages.size() - index);
			index = i;
			temp = stages[i] - 1;
		}
		if (stages[i] - 1 >= N)
			break;
		clear[stages[i] - 1]++;
	}

	vector <pair<int, float>> clear_v;
	for (int i = 0; i < clear.size(); i++) 
		clear_v.push_back(make_pair(i, clear[i]));

	sort(clear_v.begin(), clear_v.end(), compare);
	
	for (int i = 0; i < clear_v.size(); i++)
		answer.push_back(clear_v[i].first + 1);


	//실패확률 구하기

	return answer;
}
