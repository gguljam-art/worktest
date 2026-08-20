class Solution {
    public int[] solution(String[] keyinput, int[] board) {
        int[][] dir = {
            {0,1},  //up    0
            {0,-1}, //dow   1
            {-1,0}, //left  2
            {1,0}   //right 3
        };
        
        int[] answer = new int[2];
        for(String s : keyinput){
            int index = -1;
            
            switch (s){
                case "up"   :   index = 0; break;
                case "down" :   index = 1; break;
                case "left" :   index = 2; break;
                case "right":   index = 3; break;
                default     :   index = -1; break;
            }
            
            if(index == -1) continue;
            
            answer[0] += dir[index][0];
            //clamp
            answer[0] = Math.max(board[0]/2 * -1, Math.min(board[0]/2,answer[0]));
            answer[1] += dir[index][1];
            answer[1] = Math.max(board[1]/2 * -1, Math.min(board[1]/2,answer[1]));
        }
        
        return answer;
    }
}