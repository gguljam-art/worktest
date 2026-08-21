class Solution {
    public String[] solution(String[] quiz) {
        String[] answer = new String[quiz.length];
        //함수 구분
        int offset = 0;
        
        for(String qz : quiz){
            String[] mathStr = qz.split(" ");
            int a = Integer.parseInt(mathStr[0]);
            int b = Integer.parseInt(mathStr[2]);
            String s = mathStr[1];
            int n1 = subMath(a,b,s);
            int n2 = Integer.parseInt(mathStr[4]);
            //정답 비교해서 담기
            answer[offset] = (n1 == n2)?"O":"X";
            offset ++;
        }
        
        return answer;
    }
    
    public int subMath(int a, int b, String s){
        switch (s) {
            case "+":
                return a+b;
            case "-":
                return a-b;
            default:
                return 0;
        }
    }
}