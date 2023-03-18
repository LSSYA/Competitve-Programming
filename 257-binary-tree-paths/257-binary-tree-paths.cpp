/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) 
    {
        vector<string> paths;
        string path = "";
        
        if(root != NULL) backtrack(root, path, paths);
        return paths;
    }
    
    void backtrack(TreeNode* node, string path, vector<string>& paths) 
    {
        if(node->left == NULL && node->right == NULL) paths.push_back(path + to_string(node->val));
        else {
            if(node->left != NULL) 
            {
                backtrack(node->left, path + to_string(node->val) + "->", paths);
            }
            if(node->right != NULL) 
            {
                backtrack(node->right, path + to_string(node->val) + "->", paths);
            }
        }
    }
};