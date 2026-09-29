#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    map<int,int> maps;
    for(int i:numlist){
        maps[i] = abs(n-i);
    }

    vector<pair<int,int>>vec(maps.begin(), maps.end());
    sort(vec.begin(), vec.end(), [](auto&a,auto&b){
        if(a.second == b.second)
            return a.first > b.first;
        return a.second < b.second;
    });
    
    for(auto value:vec){
        answer.push_back(value.first);
    }
        
    return answer;
}