#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    for(int i = 0; i < number.size(); i++){
        int n = number[i] - '0';
        answer += n;
    }
    return answer%9;
}