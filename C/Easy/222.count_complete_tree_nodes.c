/* ----------------------------------------------------
   222. Count Complete Tree Nodes (06/01/25); JDG
   Runtime: 0 ms (100%); Memory: 20.15 MB (47.32%)
   Time complexity : O(n) - Each node is visited once. Function performs constant-time
                            operations on each node.
   Space complexity: O(n) - Worst case - If the tree is skewed, best case would be O(log n)
                            if the tree is balanced. Space complexity depends on the depth
                            of the recursion stack, which is proportional to the height
                            of the tree.
   ---------------------------------------------------- */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int countNodes( struct TreeNode* root )
{
    if( !root )
        return 0;
    
    return ( 1 + countNodes( root -> left ) + countNodes( root -> right ) );
}
