/* https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1 */

//Solution:

vector<int> subarraySum(int arr[], int n, long long s)
    {
        
       int i=0, j=0;
       long long sum = 0;
       
       for (i=0; i<n; i++)
       {
           sum = 0;
           for (j=i;j<n;j++)
           {
               sum+=arr[j];
               if (sum == s)
               {
                   return {i+1,j+1};   // return array of element
               }
               else if (sum > s)
               {
                   break;
               }
           }
       }
       return {-1};  // return single array element
   }
