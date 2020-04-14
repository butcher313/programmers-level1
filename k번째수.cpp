#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	
	vector<int> answer;
	vector<int> temp;

	vector<int>::iterator iter = array.begin();
	/*만약 정수형 벡터에 정수형 배열을 삽입하는 경우
	int arr = {1,2,3}
	vec.insert(vec.begin(), arr, arr+3); 
	하면된다. arr+3이면 범위를 넘어가는거지만 실제로 삽입되는건 arr+2까지이다.  
	*/

	for (int i = 0, size = commands.size(); i < size; i++) {
		//벡터 insert(삽입할 위치, 삽입하는 벡터의 시작 위치, 삽입하는 벡터의 마지막 위치 하나 전)
		//insert에 삽입할 때 주의해야 할 점은, (a, b)까지 삽입되는게 아니라 (a, b]까지 삽입된다는 점이다. 
		temp.insert(temp.end(), iter + commands[i][0] - 1, iter + commands[i][1]);
		sort(temp.begin(), temp.end());
		answer.push_back(temp[commands[i][2]-1]);
		temp.clear();
	}

	return answer;
}

int main() {

	vector <int> array = { 6,5,2,6,3,7,4 };
	vector <vector <int>> commands = { {2,5,3}, {4,4,1}, {1,7,3} };

	solution(array, commands);

}