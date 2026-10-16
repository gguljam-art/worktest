#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    int length = progresses.size();
    vector<int>answer;
    queue<int>q;
    
    for(int i = 0; i < length; i++){
        int day = (100 - progresses[i]) / speeds[i];
        if((100 - progresses[i]) % speeds[i] != 0){
            day ++;
        }
        q.push(day);
    }
    
    while(!q.empty()){
        int max = q.front();
        int index = 0;
        while(!q.empty() && q.front() <= max){
            q.pop();
            index ++;
        }
        if(index){
            answer.push_back(index);
        }
    }
    
    return answer;
}