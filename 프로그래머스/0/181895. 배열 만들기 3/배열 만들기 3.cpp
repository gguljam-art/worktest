#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    for(int i = intervals.size()-1; i >= 0 ; i--){
        int start = intervals[i][0];
        int end = intervals[i][1];
        
        answer.insert(answer.begin()
                      ,arr.begin()+start
                      ,arr.begin()+end+1);
    }
    return answer;
}