/* https://practice.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1/  */

//Solution:

 vector<string> winner(string arr[],int n)
    {
       
         map<string, int>m; int mx=0; 
         string s; 
         vector<string>v;

        for(int i=0;i<n;i++) 
             m[arr[i]]++;

        for(auto it:m)
        if(it.second>mx)
        {
            mx=it.second; 
            s=it.first;
            
        } 
        v.push_back(s);
        v.push_back(to_string(mx));

        return v;
    }


