/* https://practice.geeksforgeeks.org/problems/count-number-of-subtrees-having-given-sum/1/ */


//Solution:

int helper(Node *root,int sum,int &count){
    if(!root) return 0;
    
      int currsum=root->data+helper(root->left,sum,count)+helper(root->right,sum,count);
   
   if(currsum==sum)
    count++;
    return currsum;
}

int countSubtreesWithSumX(Node* root, int X)
{
	int count=0;
	helper(root,X,count);
	return count;
}


