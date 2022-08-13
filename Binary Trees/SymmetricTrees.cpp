/*
Example 1:
Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).
Input: root = [1,2,2,3,4,4,3]
Output: true
*/
  
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
     bool check(TreeNode *left, TreeNode *right)
    {
        if(!left && !right) 
            return true;
        
        if(!left || !right)
            return false;
        
        if(left -> val != right -> val)
            return false;
        
        return check(left -> right, right -> left) && check(left -> left, right -> right);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
           return true;
        return check(root -> left, root -> right);
    }
    
};
