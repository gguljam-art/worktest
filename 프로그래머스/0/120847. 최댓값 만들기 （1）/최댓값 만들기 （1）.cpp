#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -1;
    
    for(int &i : numbers){
        for(int &j : numbers){
            if(&i == &j) continue;
            if(answer < i * j)
                answer = i*j;
        }
    }
    return answer;
}