#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int s = n/10;
    
    return n * 12000 + k * 2000 - s * 2000;
}