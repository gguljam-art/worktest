#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

string trans(long long n){
    long long m = 1;
    string str = "";
    while (n - m > 0){
        m*=2;
    }
    
    if(m > n) m/=2;
    
    while(m > 0){
        if(n-m > 0){
            str += "1";
            n-=m;
        }else if(n-m == 0){
            str += "1";
                n-=m;
        }else{
            str += "0";
        }
        m/=2;
    }
    
    return str;
}

int func(string& s){
    int zero_num = 0;
    size_t st = 0;
    
    while((st = s.find('0', st)) != string::npos){
        s.replace(st,1,"");
        zero_num ++;
    }
    
    s = trans(s.size());
    
    return zero_num;
}

vector<int> solution(string s) {
    vector<int> answer;

    int znum = 0;
    int index = 0;

    while(s != "1"){
        znum += func(s);
        index ++;
    }
    
    answer.push_back(index);
    answer.push_back(znum);
    
    return answer;
}