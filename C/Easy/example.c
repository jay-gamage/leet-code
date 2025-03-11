/* ----------------------------------------------------
   136. Single number (26/12/24); JDG
   Runtime: 4 ms (19.28%); Memory: 9.36 MB (51.42%)
   Time complexity : O(n) - Iterates through loop once, each XOR operation takes constant time O(1).
   Space complexity: O(1) - Uses constant extra space: just the 'result' variable.
   ---------------------------------------------------- */

/* Note that XORing a number with itself results in zero and XORing a number with
   zero, results in that number.
   a XOR a = 0
   a XOR 0 = a
*/
int singleNumber( int* nums, int numsSize )
{
    int result = 0;

    /* XOR all numbers, any pairs will be canceled out. As "a XOR a = 0". */
    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i];              
    }

    /* Return remaining single number. */
    return result;
}
/* ---------------------------------------------------- */


/* Less efficient solution. */
int singleNumber( int* nums, int numsSize )
{
    int count;  // Holds repetitions of number.

    /* Traverse through array. */
    for( int i = 0; i < numsSize; i++ )
    {
        /* Count number of repetitions. */
        count = 0;
        for( int j = 0; j < numsSize; j++ )
        {
            if( nums[ i ] == nums[ j ] )
                count++;
        }
        /* If repeated only once, return. */
        if( count == 1 )
            return nums[ i ];
    }

    /* No single repeated number found. */
    return 0;
}
