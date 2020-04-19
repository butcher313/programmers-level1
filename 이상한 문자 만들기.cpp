#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    
    vector <char> words;
	for (int i = 0; i < s.size(); i++)
		words.push_back(s[i]);

	int i = 0;
	for (vector <char>::iterator it = words.begin(); it != words.end(); it++) {
		if (*it == ' ') {
			i = 0; answer += ' '; continue;
		}
		if (i % 2 == 0){
			answer += toupper(*it); i++;
        }
		else{
			answer += tolower(*it); i++;
        }
	}
    
    return answer;
}
