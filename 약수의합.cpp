#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector <int> prime = { 2 };

    //소수를 먼저 구하고
    int i = 1;
	for (i = 1; i <= sqrt(n); i++) {
	    if(i == sqrt(n))
            answer += i;        
        else if(n % i == 0)
            answer += i + n / i;
    }
    
    
    
    return answer;
}
