/* ----------------------------------------------------
   3314. Construct the Minimum Bitwise Array (08/01/25); JDG
   Runtime: 0 ms (100%); Memory: 20.15 MB (47.32%)
   Time complexity : O(n) - Each node is visited once. Function performs constant-time
                            operations on each node.
   Space complexity: O(n) - Worst case - If the tree is skewed, best case would be O(log n)
                            if the tree is balanced. Space complexity depends on the depth
                            of the recursion stack, which is proportional to the height
                            of the tree.
   ---------------------------------------------------- */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minBitwiseArray( int* nums, int numsSize, int* returnSize )
{
    int * ans = ( int* ) malloc( sizeof( int ) * numsSize );

    
}