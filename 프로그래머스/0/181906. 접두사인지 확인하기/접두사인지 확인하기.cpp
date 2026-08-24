#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    
    for(int i = 0; i < my_string.length(); i ++){
        string str = my_string.substr(0,i+1);
        if(str == is_prefix){
            return 1;
        }
    }
    
    return 0;
}