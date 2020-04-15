#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;

	/*unique�� �ٲ��� ���� �κ��� �����ּҸ� ��ȯ�Ѵ�. 
	��, arr = { 1,1,2,2}�� ��, unique(arr.begin(), arr.end()) �ϸ�
	arr = { 1, 2, 2, 2}�� �Ǵµ�, ���⼭ unique�� ��ȯ���� ����° �ε����� �ȴ�. */
	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	return arr;
}

int main() {
	vector <int> arr = { 1,1,3,3,0,1,1 };

	solution(arr);
}