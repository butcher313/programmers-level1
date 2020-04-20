#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

bool compare(int a, int b){
    return a > b;
}

long long solution(long long n) {
    long long answer = 0;
    
    vector <int> temp;
     while(1) {
		temp.push_back(n % 10);
		if (n / 10 < 1)
			break;
		n /= 10;
	} 
    
    sort(temp.begin(), temp.end(), compare);
    
    for(int i = 0; i < temp.size(); i++)
        answer += temp[i] * pow(10, temp.size() - i - 1);

    cout << answer << endl;
    
    return answer;
}
