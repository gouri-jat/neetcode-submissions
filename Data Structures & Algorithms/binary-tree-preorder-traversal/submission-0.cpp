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
 //create vector ans
       vector<int>ans;
       //logic : preorder ( root-left-right)
       void preorder(TreeNode* root){
        if(root == NULL) return;
        
        ans.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
       } 

    vector<int> preorderTraversal(TreeNode* root) {
        //function call
        preorder(root);
        return ans;
    }
};