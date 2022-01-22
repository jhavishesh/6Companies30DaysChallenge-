/* https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1/ */

//Solution:

 vector<int> leaders(int a[], int n){
        vector<int> v;
       int leader=a[n-1];
       v.push_back(leader);
       for(int i=n-2;i>=0;i--){
           if(a[i]>=leader){
               leader=a[i];
               v.push_back(leader); 
           }
       }
      
       sort(v.begin(),v.end(), greater<int>());
       return v;
        
    }
