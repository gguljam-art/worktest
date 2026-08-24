class Solution {
    public String solution(String my_string, int m, int c) {
        String answer = "";
        int len = my_string.length()/m;
        for(int i = 0; i < len; i++){
            char cc = my_string.charAt(i * m + c -1);
            answer += cc;
        }
        return answer;
    }
}