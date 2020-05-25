/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* bst(vector<int>&p,int& id,int limit)
    {
        if(id==p.size() or p[id]>limit)
            return nullptr;
        int val=p[id];
        TreeNode* root=new TreeNode(val);
        id++;
        root->left=bst(p,id,val);
        root->right=bst(p,id,limit);
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        
        int id=0;
        TreeNode* root=bst(preorder,id,INT_MAX);
        return root;
    }
};
