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

	sort(lost.begin(), lost.end());
	sort(reserve.begin(), reserve.end());

	for (int num : lost)
		losts[num];

    int i = 0;
	for (int num : reserve) {
		if (losts.find(num) != losts.end()) {
			//Ã£¾ÒÀ¸¸é
			losts.erase(losts.find(num));
		}
		else if (losts.find(num - 1) != losts.end()) {
			losts.erase(losts.find(num - 1));
		}
		else if (losts.find(num + 1) != losts.end() && num + 1 != reserve[i + 1]) {
			losts.erase(losts.find(num + 1));
		}
        i++;
	}

	answer = n - losts.size();
    
    return answer;
}

int main() {

	int n = 18;
	vector <int> lost = {7,8,11,12};
	vector <int> reserve = {11, 12, 8, 7};

	solution(n, lost, reserve);
}

