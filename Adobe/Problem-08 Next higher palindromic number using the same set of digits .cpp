/* https://practice.geeksforgeeks.org/problems/next-higher-palindromic-number-using-the-same-set-of-digits5859/1/ */


//Solution:

string nextPalin(string N) { 
        int n=N.size();
        if(n<=3) return "-1";
        string half = N.substr(0,n/2);
        if( next_permutation( half.begin() , half.end() ) )
        {
            string ans=half;
            if(n&1)
            {
                ans+=N[n/2];
            }
            reverse(half.begin() , half.end());
            ans+=half;
            return ans;
        }
        return "-1";
    }
