#include <string>
#include <vector>

using namespace std;

void checkborder(vector<vector<int>>&computers,
                 int index, vector<bool>&invisit){
    invisit[index] = true;
    for(int i = 0; i < invisit.size(); i++){
        if(computers[index][i] == 1&&invisit[i] == false){
            checkborder(computers, i, invisit);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    vector<bool>visit(n,false);
    for(int i = 0; i < visit.size(); i++){
        if(visit[i] == false){
            answer ++;
            checkborder(computers, i, visit);
        }
    }
    return answer;
}