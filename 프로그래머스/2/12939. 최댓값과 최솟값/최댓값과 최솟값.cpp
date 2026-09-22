#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    stringstream st(s);
    string str;
    vector<string>strs;
    while(st >> str){
        strs.push_back(str);
    }
    int max = -99999999;
    int min = 99999999;
    for(string ss : strs){
        int n = stoi(ss);
        if(n > max){
            max = n;
        }
        if(n < min){
            min = n;
        }
    }
    answer += to_string(min) + " " +  to_string(max);
    return answer;
}