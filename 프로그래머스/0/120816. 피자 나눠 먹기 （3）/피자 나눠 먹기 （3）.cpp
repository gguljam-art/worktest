#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    int t=0;
    while(t < n){
            answer ++; 
            t = slice * answer;
        }
    
    return answer;
}