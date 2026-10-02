#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    
    vector<int>array;
    for(int i = 0; i < lines.size(); i++){
        for(int j : lines[i]){
            array.push_back(j);
        }
    }
    
    sort(array.begin(), array.end());
    
    vector<int> setline;
    
    for(int i = array[0]; i < array[array.size()-1]; i++){
        int n = 0;
        for(auto line : lines){
            if(i >= line[0] && i < line[1]){
                n++;
            }
        }
        
        if(n > 1){
            setline.push_back(i);
        }
    }
    
    
    return setline.size();
}