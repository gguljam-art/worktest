#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int n1 = 0;
    int n2 = 0;
    
    for(int i = 0; i< num_list.size(); i++){
        if(i%2 == 0)
            n1 +=num_list[i];
        else
            n2 +=num_list[i];
    }
    return max(n1,n2);
}