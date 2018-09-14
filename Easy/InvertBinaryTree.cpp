/* Invert a binary tree. */


class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*> stk;
        stk.push(root);
        while(!stk.empty())
        {
            TreeNode * p = stk.top();
            stk.pop();
            if(p)
            {
                stk.push(p->left);
                stk.push(p->right);
                swap(p->left, p->right);
            }
            
        }
        return root;
    }
};
