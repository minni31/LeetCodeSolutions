/* Given a binary tree, return all root-to-leaf paths. */

class Solution {
public:
    void binaryTreePaths(TreeNode *root, vector<string>& paths, string path){
        if(root->left == NULL && root->right==NULL){
            path += to_string(root->val);
            paths.push_back(path);
            return;
        }
        path += to_string(root->val)+"->";
        if(root->left)
            binaryTreePaths(root->left, paths, path);
        if(root->right)
            binaryTreePaths(root->right, paths, path);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        if(root==NULL)
            return paths;
        binaryTreePaths(root, paths, "");
        return paths;
    }
};
