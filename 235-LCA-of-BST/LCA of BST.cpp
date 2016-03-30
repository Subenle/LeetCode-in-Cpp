/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 求解思路：
 如果p,q 的值比root小, 则LCA必定在左子树, 如果p,q的值比root大, 则LCA必定在右子树. 如果一大一小, 则root即为LCA.
 */
class Solution {
public:
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL || p==NULL || q==NULL) return NULL;  
          
        if((p->val< root->val) && (q->val < root->val)) {  
            return lowestCommonAncestor(root->left, p, q);  
        } else if((p->val> root->val)&& (q->val > root->val)) {  
            return lowestCommonAncestor(root->right, p, q);  
        } else return root;
    }
};
