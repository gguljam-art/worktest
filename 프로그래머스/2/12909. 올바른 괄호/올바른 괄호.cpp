#include<string>
#include <iostream>
#include <algorithm>

using namespace std;

bool solution(string s)
{
    int n = 0;
    
    for(char c : s){
        if(c == '('){
            n ++;
        }else if(c == ')'){
            n--;
        }
        
        if(n < 0){
            return false;
        }
    }

    return n == 0 ? true : false;
}