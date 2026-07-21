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
   //logic , postorder: l-r-root
   void postorder(TreeNode* root){
      if(root == NULL ) return;  //handling null values
         
         postorder(root->left);
         postorder(root->right);
         ans.push_back(root->val);
   }
    vector<int> postorderTraversal(TreeNode* root) {
        //function call
        postorder(root);
        return ans;
    }
};