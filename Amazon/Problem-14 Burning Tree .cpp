/* https://practice.geeksforgeeks.org/problems/burning-tree/1/*/

//Solution: TC(0.0/1.0)

 int minTime(Node* root, int target) 
    {
       int maxi = 0;
        Node * t = NULL;
        util1(root,target,maxi,t);
        int m = height(t)-1;
        
        return max(maxi,m);
    }
    
    pair<int,int> util1(Node *root,int target,int &maxi,Node * &t){
        if(!root) return {0,0};
        
        if(root->data == target){
            t=root;
            return {target,1};
        } 
        
        pair<int,int> l,r;
        l = util1(root->left,target,maxi,t);
        r = util1(root->right,target,maxi,t);
        
        if(l.first){
            maxi = max(maxi,l.second+r.second);
            return {l.first,l.second+1};
        }
        else if(r.first){
            maxi = max(maxi,r.second+l.second);
            return {r.first,r.second+1};
        }
        
        return {0,max(l.second,r.second)+1};
    }
    
    int height(Node *root){
        if(!root) return 0;
        
        return max(height(root->left),height(root->right))+1;
    }
    
