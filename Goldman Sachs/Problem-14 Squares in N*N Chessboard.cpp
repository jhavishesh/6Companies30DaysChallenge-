
/* https://www.geeksforgeeks.org/program-to-find-number-of-squares-on-a-chessboard/  */


//Solution:

class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        long long answer=0;
        if(N==1)
        {
            return 1;
        }
        while(N>0)
        {
            answer = answer + (N*N);
            N--;
        }
        return answer;
    }
};
