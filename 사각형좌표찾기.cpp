#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int> > v) {
    vector<int> ans;
    
	vector<int> x;
	vector<int> y;

	x.push_back(v[0].front());
	y.push_back(v[0].back());

	vector<int>::iterator it;
	for (int i = 1; i < v.size(); i++) {
		if ((it = find(x.begin(), x.end(), v[i].front())) != x.end()) 
			x.erase(it);
		else
			x.push_back(v[i].front());
		if ((it = find(y.begin(), y.end(), v[i].back())) != y.end())
			y.erase(it);
		else
			y.push_back(v[i].back());
	}
	ans.push_back(x.back());
	ans.push_back(y.back());

    

    return ans;
}
