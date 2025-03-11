/* ----------------------------------------------------
   169. Majority Element (01/01/2); JDG
   Runtime: 0 ms (100%); Memory: 10.32 MB (19.76%)
   Time complexity : O(n) - Scans array one to find candidate.
   Space complexity: O(1) - Uses only few integer variables.
   ---------------------------------------------------- */

/* Use Boyer-Moore Majority Vote Algorithm to find the element that is repeated more than
   n/2 of the array, where n is the size of the array. 
   Note that this will return an invalid result if there is no majority element in the
   array. An optional verificaiton stage will need to be added to account for if required. */
int majorityElement( int* nums, int numsSize )
{
    int candidate = 0;  // Keep track of element for majority vote.
    int count = 0;      // Keep count of element.

    /* Traverse through array. */
    for( int i = 0; i < numsSize; i++ )
    {
        /* If count is zero, update candidate. */
        if( count == 0 )
        {
            candidate = nums[ i ];
            count++;
        }
        /* If candidate matches element, increment count. */
        else if( candidate == nums[ i ] )
            count++;
        /* Otherwise, decrement count.*/
        else
            count--;
    }

    /* Return majority candidate. */
    return candidate;
}
