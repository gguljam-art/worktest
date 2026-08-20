class Solution {
    public int[] solution(int n) {
        //b가 true라면 나눗셈 시작
        //나머지가 0이라면 배열에 추가
        String str = "";
        int j = 2;
        
        while(true){
            //i가 소수인지 검사
            //boolean b = b(j);
            //나누어 떨어지면, 답에+, n에서 뺌
            if(n%j == 0){
                str+=" " + j;
                n /= j;
                while(n%j == 0){
                    n/=j;
                }
            }
            
            if(n%j != 0) j++;
            if(j > n) break;
        }
        
        String[] starr = str.split(" ");

        int[] answer = new int[starr.length-1];
        for(int i = 0; i < answer.length; i++){
            answer[i] = Integer.parseInt(starr[i+1]);
        }
        
        System.out.print(str);
        
        return answer;
    }

    //소수 검사 함수
    public boolean b (int n){
        for(int j = 2; j <= n/2 ; j++){
            if(n%j == 0) return false;
        }
        return true;
    }
}