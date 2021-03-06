/* https://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/1/  */

//Solution:


/* Approach : 

Store the level order traversal and the number of nodes at each level.
Make the connections at each level and assign last node as null.   */

  void connect(Node *root)
    {
       // Your Code Here
       queue<Node*>q;
       q.push(root);
       vector<int>vec;
       vector<Node*>bfs;
       while(!q.empty()){
           int size = q.size();
               for(int i=0; i<size; i++){
                   Node* temp = q.front();
                   bfs.push_back(temp);
                   q.pop();
                   if(temp->left){
                       q.push(temp->left);
                   }
                   if(temp->right){
                       q.push(temp->right);
                   }
               }
               vec.push_back(size);
       }
    //   for(auto it : vec){
    //       cout << it << " ";
    //   }
    int idx = 0;
    for(int i=0; i<vec.size(); i++){
        int value = vec[i];
        while(value != 0){
            if(value == 1){
                bfs[idx]->nextRight = nullptr;
            }
            else{
                bfs[idx]->nextRight = bfs[idx+1];
            }
            idx++;
            value--;
        }
    }
       
    }    
