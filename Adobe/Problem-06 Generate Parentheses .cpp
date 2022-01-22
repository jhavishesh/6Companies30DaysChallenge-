/* https://practice.geeksforgeeks.org/problems/generate-all-possible-parentheses/1/ */


//Solution:

 vector<string>vs;
   void sol(string op,int open,int close){
       if(open==0 && close==0){
           vs.push_back(op);
           return;
       }
       if(open!=0){
           string op1=op;
           op1.push_back('(');
           sol(op1,open-1,close);
       }
       if(close>open){
           string op2=op;
           op2.push_back(')');
           sol(op2,open,close-1);
       }
       return ;
   }
   vector<string> AllParenthesis(int n) 
   {
       // Your code goes here    
       string s;
       sol(s,n,n);
       return vs;
   }

