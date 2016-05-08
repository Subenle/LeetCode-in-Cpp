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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode * >queue;

        vector<vector<int>>res;
        int size;

        if(!root)return res;
        queue.push(root);
        while(!queue.empty()){
            vector<int>level;
            size=queue.size();
            while(size>0){
                TreeNode * temp=queue.front();
                level.push_back(temp->val);
                queue.pop();
                size--;
                if(temp->left)queue.push(temp->left);
                if(temp->right)queue.push(temp->right);
            }
         res.insert(res.begin(), level);
        }
    return res;
    }
};
