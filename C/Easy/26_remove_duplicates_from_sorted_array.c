/* ----------------------------------------------------
   26. Remove Duplicates (31/12/24); JDG
   Runtime: 0 ms (100%); Memory: 12.19 MB (50.08%)
   Time complexity : O(n) - Single loop through array.
   Space complexity: O(1) - No extra space used.
   ---------------------------------------------------- */

int removeDuplicates( int* nums, int numsSize )
{
    /* Use a 2-pointer technique:
       uniqueIndex keeps track of the last position a unique element is placed.
       i iterates through array. */

    int uniqueIndex = 0;

    /* Iterate through array. */
    for( int i = 0; i < numsSize; i++ )
    {
        /* If not unique, increase count and remove element.*/
        if( nums[ uniqueIndex ] != nums[ i ] )
        {
            uniqueIndex++;
            nums[ uniqueIndex ] = nums [ i ];
        }
    }

    /* Return uniqueIndex + 1 as it represents a 0-based index. */
    return uniqueIndex + 1;
}
