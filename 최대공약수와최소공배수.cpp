#include <string>
#include <vector>
#include <cmath>

using namespace std;

int small(int n, int m){
    if(n < m)
        return n;
    else 
        return m;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int temp;
    
    for(int i  = 1; i <= small(n, m); i++){
        if(n % i == 0 && m % i == 0)
            temp = i;
    }
    answer.push_back(temp);
    answer.push_back(n * m / temp);
    
    return answer;
}
