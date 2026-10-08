#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

string func(int n){
    string str;
    while(n > 0){
        str += to_string(n%2);
        n/=2;
    }
    
    reverse(str.begin(),str.end());
    return str;
}

vector<int> solution(string s) {
    vector<int> answer;

    int znum = 0;
    int index = 0;

    while(s != "1"){
        int n = count(s.begin(),s.end(),'1');
        znum += s.size() - n;
        s = func(n);
        index ++;
    }
    
    answer.push_back(index);
    answer.push_back(znum);
    
    return answer;
}