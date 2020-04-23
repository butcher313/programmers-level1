#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    
    int temp = 0;
    int temp_x = x;
    while(1){
        temp += temp_x % 10;
        if(temp_x / 10 == 0)
           break;
        temp_x /= 10;
    }
    
    cout << "temp : " << temp << endl;
    
    if(x % temp == 0)
        return true;
    else
        return false;

}
