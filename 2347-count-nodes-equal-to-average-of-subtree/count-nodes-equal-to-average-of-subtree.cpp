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
    int su(TreeNode * r){
        int a = 0 ;
        if(r==NULL){ return 0;}
        a+=r->val ;
        a+=su(r->left);
        a+=su(r->right) ;
        return  a ;
    }
    int co (TreeNode * r){
        int a =0 ;
        if(r==NULL){ return 0 ;}
         a++ ;
        a+=co(r->left);
        a+=co(r->right) ;
        return  a ;
    }
    int averageOfSubtree(TreeNode* r) {
        int c =0 ;
        if(r==NULL){ return 0 ;}
       if( su(r)/co(r)==r->val){ c++ ;} ;
        c+= averageOfSubtree(r->left) ;
        c+= averageOfSubtree(r->right) ;
        return c ;
    }
};