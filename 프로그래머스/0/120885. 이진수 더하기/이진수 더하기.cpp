#include <string>
#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int sub01(string str){
    int len = str.size() - 1;
    int crr = 0;
    
    int n = 0;
    while(crr <= len){
        if(str.at(crr) == '1'){
            int m = pow(2,len-crr) != 0 ? pow(2,len-crr) : 1;
            n+=m;
        }
        crr ++;
    }
    
    return n;
}

string sub02(int n){
    string str = "";
    int index = 1;
    while(n > pow(2,index)){
        index ++;
    }
    
    while(index > 0){
        if(pow(2,index) <= n){
            n -= pow(2,index);
            str += '1';
        } else{
            str += '0';
        }
        index --;
    }
    
    if(n == 1)
        str += '1';
    else
        str += '0';
    
    if(str.at(0) == '0')
        str.erase(str.begin());
    
    return str;
}

string solution(string bin1, string bin2) {
    string answer = "";
    //2진수를 정수로 반환
    int n1 = sub01(bin1);
    int n2 = sub01(bin2);
    int m = n1 + n2;
    
    cout << sub02(m) << endl;
    
    //서로 더한 뒤
    //다시 2진수로 반환
    return sub02(m);
}
