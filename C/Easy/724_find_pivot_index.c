/* ----------------------------------------------------
   724. Find Pivot Index (04/01/25); JDG
   Runtime: 0 ms (100%); Memory: 12.19 MB (50.08%)
   Time complexity : O(n) - Traverses array twice, so is O(2n), but in Big-O notation, constants
                            are ignored as they don't affect the growth rate.
   Space complexity: O(1) - Few extra variables.
   ---------------------------------------------------- */

int pivotIndex( int* nums, int numsSize )
{
    int leftSum = 0;
    int rightSum = 0;

    /* Calculate right sum. */
    for( int i = 0; i < numsSize; i++ )
        rightSum += nums[ i ];

    /* Find pivot index. */
    for( int i = 0; i < numsSize; i++ )
    {
        /* Only shift leftSum by 1 from index 1 onwards. */
        if( i > 0 )
            leftSum += nums[ i - 1 ];

        /* Shift rightSum by 1. */
        rightSum -= nums[ i ];

        /* Pivot index found. */
        if( leftSum == rightSum )
            return i;
    }

    /* No pivot index found. */
    return -1;
}
