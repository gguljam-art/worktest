#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool subfunction(int n){
    if(n < 2) return false;
    for(int i = 2; i * i <= n ; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}

vector<int> solution(int n) {
    vector<int> answer;
    int index = 2;
    while(n>=index){
        if(n%index == 0 && subfunction(index)){
            //for(int i = 0; i < n/index; i ++){
                answer.push_back(index);
            //}
        }
        index ++;
    }
    
    return answer;
}
