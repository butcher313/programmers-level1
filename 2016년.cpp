#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector <int> calender;
    
    vector <string> day;
    day.push_back("FRI");
    day.push_back("SAT");
    day.push_back("SUN");
    day.push_back("MON");
    day.push_back("TUE");
    day.push_back("WED");
    day.push_back("THU");
    
    for(int i = 0; i < 12; i++){
        if(i == 1)
            calender.push_back(29);
        else if(i < 7)
            calender.push_back(30 + (i+1) % 2);
        else if(i >= 7)
            calender.push_back(30 + i % 2);
    }
    
    int temp = 0;
    for(int i = 0; i < a - 1; i++ )
        temp += calender[i];
    temp += (b - 1);
    
    cout << temp << endl;
    
    return day[temp % 7];
    
}
