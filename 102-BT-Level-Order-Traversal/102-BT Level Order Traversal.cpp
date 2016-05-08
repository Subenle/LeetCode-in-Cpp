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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (!root) return res;
        vector<TreeNode*> Tvec;
        Tvec.push_back(root);
        while(!Tvec.empty()){
            vector<int> ivec;
            int size = Tvec.size();
            while(size>0){
                TreeNode* tmp = Tvec[0];
                ivec.push_back(tmp->val);
                Tvec.erase(Tvec.begin());
                size --;
                if (tmp->left) Tvec.push_back(tmp->left);
                if (tmp->right) Tvec.push_back(tmp->right);
            }
            res.push_back(ivec);
        }
        return res;
    }
};
