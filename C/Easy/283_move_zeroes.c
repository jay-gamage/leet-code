/* Completed date: 27/12/24
   Author: JDG */
/* ----------------------------------------------------- */

/*
   Standard solution:
   - Time complexity:  O(n^2) is the worst case, where every zero may need to shift all the
                       elements. Due to inner loop shifting elements one by one.
   - Space complexity: O(1) - Operations are done in-place.
*/
void moveZeroes( int* nums, int numsSize )
{
    /* Traverse through array. */
    for( int i = 0; i < numsSize; i++ )
    {
        /* If zero is found. */
        if( nums[ i ] == 0 )
        {
            for( int j = i+1; j < numsSize; j++ )
            {
                /* Continue until end of zeros is reached. */
                if( nums[ j ] != 0 )
                {
                    /* Swap elements. */
                    nums[ i ] = nums [ j ];
                    nums[ j ] = 0;
                    break;
                }
            }
        }
    }
}
/* -----------------------------------------------------*/

/* 
   Efficient solution:
   - Time complexity:  O(n) - Array is traversed once and each operation inside the loop is O(1).
   - Space complexity: O(1) - Array is modified in-place.
*/
void moveZeroes( int* nums, int numsSize )
{
    int nonZeroIdx = 0;

    /* Traverse through array. */
    for( int i = 0; i < numsSize; i++ )
    {
        /* Found non-zero value. */
        if( nums[ i ] != 0 )
        {
            /* Avoid unncessary swaps. */
            if( i != nonZeroIdx )
            {
                /* Swap elements. */
                nums[ nonZeroIdx ] = nums [ i ];
                nums[ i ] = 0;
            }
            nonZeroIdx++;
        }
    }
}

