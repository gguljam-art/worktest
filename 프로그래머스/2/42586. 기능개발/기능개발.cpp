#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    int length = progresses.size();
    vector<int>answer;
    int index = 0;
    
    int testint = 0;
    while(index < length){
        int n = 0;
        for(int i = 0; i < length; i++){
            progresses[i] += speeds[i];
        }
        while(progresses[index] >= 100 && index < length){
            if(progresses[index] >= 100){
                int num = progresses[index];
                index ++;
                n ++;
            }
        }
        cout << endl;
        if(n>0){
            answer.push_back(n);
        }
        
    }
    return answer;
}