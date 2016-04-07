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
    int maxHeight(TreeNode *root) {    
        if (root == NULL) return 0;    
            
        int leftDepth = maxHeight(root->left) + 1;    
        int rightDepth = maxHeight(root->right) + 1;    
        return leftDepth > rightDepth ? leftDepth : rightDepth;    
    } 
    
    bool isBalanced(TreeNode* root) {
        if (root == NULL) return true;  
        int leftDepth = maxHeight(root->left);  
        int rightDepth = maxHeight(root->right);  
        if (abs(leftDepth - rightDepth) >= 2)  
            return false;  
        else  
            return isBalanced(root->left) && isBalanced(root->right);  
    }
};
