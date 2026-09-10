#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int pice = 7;
    int index = 1;
    while( pice * index < n){
        index++;
    }
    
    return index;
}