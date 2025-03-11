/* ----------------------------------------------------
   1. Two sum (27/12/24); JDG
   Runtime: 99 ms (82.83%); Memory: 8.59 MB (75.28%)
   Time complexity : O(n^2) - Outer loop runs n-1 times, inner loops runs n/2 times on average.
   Space complexity: O(1)   - Array size fixed at size 2.
   ---------------------------------------------------- */

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    /* Allocate memory to store indices [ a, b ]. */
    *returnSize = 2;
    int* indices = ( int* )malloc( *returnSize * sizeof( int ) );
    
    /* Loop through array of nums. */
    for( int i = 0; i < ( numsSize -1 ); i++ )
    {
        for ( int j = i+1; j < numsSize; j++ )
        {
            /* If two numers add up to target, return their indices. */
            if( ( nums[i] ) + ( nums[j] ) == target )
            {
                indices[0] = i;
                indices[1] = j;
                return indices;
            }
        }
    }
    /* If none found, return NULL. */
    *returnSize = 0;
    return NULL;
}
