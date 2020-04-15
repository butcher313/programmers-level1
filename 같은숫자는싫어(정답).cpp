#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;

	/*unique는 바뀌지 않은 부분의 시작주소를 반환한다. 
	즉, arr = { 1,1,2,2}일 때, unique(arr.begin(), arr.end()) 하면
	arr = { 1, 2, 2, 2}가 되는데, 여기서 unique의 반환값은 세번째 인덱스가 된다. */
	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	return arr;
}

int main() {
	vector <int> arr = { 1,1,3,3,0,1,1 };

	solution(arr);
}