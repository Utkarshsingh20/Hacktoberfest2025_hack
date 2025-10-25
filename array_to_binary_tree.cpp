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
    TreeNode* solve(vector<int> &a,int l,int r){
        if(l>r)return NULL;
        if(l==r){
            TreeNode* node= new TreeNode(a[l]);
            return node;
        }
        int m=(l+r)/2;
        TreeNode* root= new TreeNode(a[m]);
        root->left=solve(a,l,m-1);
        root->right=solve(a,m+1,r);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& a) {
        int n=a.size();
        return solve(a,0,n-1);
    }
};
