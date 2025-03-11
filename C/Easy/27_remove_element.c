/* ----------------------------------------------------
   27. Remove Element (29/12/24); JDG
   Runtime: 0 ms (100%); Memory: 9.66 MB (48.32%)
   Time complexity : O(1) - Array traversed once with fast pointer.
   Space complexity: O(1) - Array is modified in-place, no additional space is used.
   ---------------------------------------------------- */

int removeElement( int* nums, int numsSize, int val)
{
    /* Use a 2 - pointer approach:
       fast iterates through array.
       slow keeps track of the position to overwrite valid elements. */

    int slow = 0;
    for( int fast = 0; fast < numsSize; fast++ )
    {   
        /* If val is not found, assign value in fast pointer to slow and iterate both.*/
        if( nums[ fast ] != val )
            nums[ slow++ ] = nums [ fast ];
    }

    /* Return occurences of val. */ 
    return slow;
}
