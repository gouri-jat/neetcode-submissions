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
    // creating vector ans
    vector<int>ans;
    //logic : inorder - (l-root-right)
    void inorder(TreeNode* root){
        if(root == NULL) return;
        inorder(root-> left);

        ans.push_back(root->val);
        inorder(root->right);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        //function calling
        inorder(root);
        return ans; //vector functions wants vector type return
    }
};