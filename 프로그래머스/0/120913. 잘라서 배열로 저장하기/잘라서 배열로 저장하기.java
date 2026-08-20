class Solution {
    public String[] solution(String my_str, int n) {
        int len = (my_str.length()%n)==0?my_str.length()/n:my_str.length()/n+ 1;
        
        String[] answer = new String[len];
        int cnt = 0;
        for(int i = 0; i < answer.length; i++){
            answer[i] = "";
        }
        
        for(int i = 0; i < my_str.length(); i++){
            answer[cnt]+=my_str.charAt(i);
            if(i%n == n-1) cnt ++;
        }
        return answer;
    }
}