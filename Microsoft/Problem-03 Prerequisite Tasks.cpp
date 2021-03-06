/* https://practice.geeksforgeeks.org/problems/prerequisite-tasks/1/ */

//Solution:

// Using Topological sort(kahn's approach | BFS ) 

bool isPossible(int N, vector<pair<int, int>>& p) {
     vector <int> adj[N]; 
     for(auto i : p) {
         adj[i.first].push_back(i.second);
     }
     
     vector<int> indegree(N, 0);
     for(int i = 0; i < N; ++i) {
         for(auto it : adj[i]) {
             indegree[it]++;
         }
     }
     
     queue<int> q;
     for(int i = 0; i < N; ++i) {
         if(indegree[i] == 0) {
             q.push(i);
         }
     }
     
     int count = 0;
     while(!q.empty()) {
         int node = q.front();
         count += 1;
         q.pop();
         
         for(auto i : adj[node]) {
             indegree[i]--;
             if(indegree[i] == 0) {
                 q.push(i);
             }
         }
     }
    
     if(count == N) return true;
     return false;
}

