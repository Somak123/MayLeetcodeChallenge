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
    struct parent{
        TreeNode* curr;
        TreeNode* parent;
        int depth;
    };
    bool isCousins(TreeNode* root, int x, int y) {
        
        if(!root)
            return false;
        queue<parent>q;
        q.push({root,nullptr,0});
        parent A,B;
        while(!q.empty())
        {
            auto [curr,parent,depth]=q.front();
            if(curr->val==x)
            {
                A=q.front();
            }
            else if(curr->val==y)
            {
                B=q.front();
            }
            q.pop();
            if(curr->left)
                q.push({curr->left,curr,depth+1});
            if(curr->right)
                q.push({curr->right,curr,depth+1});
        }
        return A.depth==B.depth and A.parent!=B.parent;
    }
};
