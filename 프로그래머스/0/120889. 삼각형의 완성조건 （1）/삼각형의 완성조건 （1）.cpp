#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int *max = &sides[0];
    for(int &i : sides){
        if(i > *max) max = &i;
    }
    
    int sum = 0;
    for(const int &i : sides){
        if(&i != max){
            sum += i;
        }
    }
    
    cout << sum << endl;
    
    return sum > *max ? 1 : 2;
}