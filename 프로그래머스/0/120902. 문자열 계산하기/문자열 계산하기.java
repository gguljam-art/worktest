class Solution {
    public int solution(String my_string) {
        String[] arr = my_string.split(" ");
        String s = arr[1];
        int answer = Integer.parseInt(arr[0]);
        
        for(int i = 1; i < arr.length-1; i+=2){
            int b = Integer.parseInt(arr[i+1]);
            switch(arr[i]){
                case "+":
                    answer = answer + b;
                    break;
                case "-": 
                    answer = answer - b;
                    break;
                default: break;
            }
        }
        
        return answer;
    }
}