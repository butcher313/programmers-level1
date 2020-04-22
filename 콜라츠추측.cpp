#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long temp = num;
    
    int i;
    for(i = 0; i < 500; i++){
        if(temp == 1)
            return i;
        else if(temp % 2 == 0)
            temp /= 2;
        else
            temp = temp * 3 + 1;
    }
    return -1;
}
