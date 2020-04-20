#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    vector<int>::iterator temp = arr.begin();
    for(vector<int>::iterator it = arr.begin() + 1; it != arr.end(); it++){
        if(*temp > *it)
            temp = it;
    }
    arr.erase(temp);
    
    if(arr.size() == 0)
        arr.push_back(-1);
    
    return arr;
}
