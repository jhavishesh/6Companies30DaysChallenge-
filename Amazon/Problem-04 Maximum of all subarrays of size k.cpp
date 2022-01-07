/* https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1  */



//Solution:

vector <int> max_of_subarrays(int *arr, int n, int k)
    {
         int i=0, j=0;
        vector<int> ans;//to store the result
        list<int> l;  // to perform the calculation of sliding window
        while(j<n)  
        {
            while(!l.empty() && l.back()<arr[j]) //check elements are smaller then arr[j] then pop out 
            l.pop_back();
            l.push_back(arr[j]);  //pushback greatest element in list
            if(j-i+1<k) j++;
            else if(j-i+1==k) //window size equal to k then we check 
            {
                ans.push_back(l.front()); 
                if(arr[i]==l.front()) 
                l.pop_front(); // removing the first element of prev window
                i++; 
                j++; // slide the window
            }
        }
        return ans; //return the result
    }
