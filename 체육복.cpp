#include <string>
#include <vector>
#include <unordered_map>
#include <map>
#include <iostream>
#include <ctime>

using namespace std;


int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer = 0;
	
	unordered_map <int, int> losts;

	for (int num : lost)
		losts[num];

	for (int num : reserve) {
		cout << num << endl;
		if (losts.find(num) != losts.end()) {
			//찾았으면
			losts.erase(losts.find(num));
		}
		else if (num - 1 >= 0 && losts.find(num - 1) != losts.end()) {
			losts.erase(losts.find(num - 1));
		}
		else if (num + 1 <= n && losts.find(num + 1) != losts.end()) {
			losts.erase(losts.find(num + 1));
		}
	}

	answer = n - losts.size();

	cout << "\n정답 : " << answer << endl;
	
	for (auto i = losts.begin(); i != losts.end(); i++)
		cout << i->first << " ";
	cout << endl;

	return answer;
}

int main() {

	int n = 18;
	vector <int> lost = {7,8,11,12};
	vector <int> reserve = {11, 12, 8, 7};

	solution(n, lost, reserve);
}

