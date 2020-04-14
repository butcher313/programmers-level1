#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	
	vector<int> answer;
	vector<int> temp;

	vector<int>::iterator iter = array.begin();
	/*���� ������ ���Ϳ� ������ �迭�� �����ϴ� ���
	int arr = {1,2,3}
	vec.insert(vec.begin(), arr, arr+3); 
	�ϸ�ȴ�. arr+3�̸� ������ �Ѿ�°����� ������ ���ԵǴ°� arr+2�����̴�.  
	*/

	for (int i = 0, size = commands.size(); i < size; i++) {
		//���� insert(������ ��ġ, �����ϴ� ������ ���� ��ġ, �����ϴ� ������ ������ ��ġ �ϳ� ��)
		//insert�� ������ �� �����ؾ� �� ����, (a, b)���� ���ԵǴ°� �ƴ϶� (a, b]���� ���Եȴٴ� ���̴�. 
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