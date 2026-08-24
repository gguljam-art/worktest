#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    vector<int> arr;
    
    for(int i = 0; i< n; i ++){
        arr.push_back(num_list[0]);
        num_list.erase(num_list.begin());
    }
    answer.insert(answer.end(),num_list.begin(),num_list.end());
    answer.insert(answer.end(),arr.begin(),arr.end());
    
    return answer;
}