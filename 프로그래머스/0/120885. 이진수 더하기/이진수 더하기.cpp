#include <string>
#include <vector>
#include <iostream>
#include <bitset>

using namespace std;

string solution(string bin1, string bin2) {
    int n1 = stoi(bin1, nullptr, 2);
    int n2 = stoi(bin2, nullptr, 2);
    int n3 = n1 + n2;
    
    if(n3 == 0) return "0";
    
    bitset<32> b1(n3);
    string s1 = b1.to_string();
    
    return s1.substr(s1.find('1'));
}
