#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
	string small =  "abcdefghijklmnopqrstuvwxyz";

	//해쉬 자료형을 쓸까? 
	//알파벳 A이면 anwer += IntToChar(charToInt(A) + 4)
	for (int i = 0; i < s.size(); i++) {
		if (s[i] - 'a' >= 0) {
			answer += small[(s[i] - 'a' + n) % 26];
		}
		else if (s[i] == ' ') {
			answer += ' ';
		}
		else {
			answer += toupper(small[(s[i] - 'A' + n) % 26]);
		}
	}
    
    return answer;
}
