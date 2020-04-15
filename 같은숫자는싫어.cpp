#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;

	for (vector <int>::iterator it = arr.begin(); it != arr.end() - 1;) {
		if (*it == *(it + 1))
			it = arr.erase(it);
		else
			it++;
	}

	for (vector <int>::iterator it = arr.begin(); it != arr.end(); it++) {
		cout << *it << " " << endl;
	}

	return arr;
}

int main() {
	vector <int> arr = { 1,1,3,3,0,1,1 };

	solution(arr);
}