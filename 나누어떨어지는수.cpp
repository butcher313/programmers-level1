#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for(int i = 0; i < arr.size(); i++){
        if(!(arr[i] % divisor))
            answer.push_back(arr[i]);
    }
    
    if(answer.size() == 0)
        answer.push_back(-1);
    
    for(int i = 0; i < answer.size(); i++)
        cout << answer[i] << endl;
    
    sort(answer.begin(), answer.end());    
    
    return answer;
}
