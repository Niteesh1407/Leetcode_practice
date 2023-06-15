//link: https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/

CODE:

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
    int maxLevelSum(TreeNode* root) {
        if(root==nullptr)
        return 0;
        queue<TreeNode*>q;
        q.push(root);
        int ml=1;
        int ms=INT_MIN;
        int level=1;
        while(!q.empty()){
            int ls=0;
            int lsize=q.size();
            for(int i=0;i<lsize;i++){
                TreeNode* node=q.front();
                q.pop();
                ls=ls+node->val;
                if(node->left!=nullptr){
                    q.push(node->left);
                }
                if(node->right!=nullptr){
                    q.push(node->right);
                }
            }
            if(ls>ms){
                ms=ls;
                ml=level;
            }
            level++;
        }
        return ml;
    }
};
