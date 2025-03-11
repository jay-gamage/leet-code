/* ----------------------------------------------------
   374. Guess Number Higher or Lower (29/12/24); JDG
   Runtime: 0 ms (100%); Memory: 7.86 MB (43.68%)
   Time complexity : O(log n) at worst case, each step halves the search range; O(1) at best
                     case, where the target is the mid-point.
   Space complexity: O(1) - Iterative approach of binary search is used. If the recursive
                            binary search was used (calling the same function recursively),
                            space complexity will be O(log n) as each recusrive call would
                            be added to the call stack.
   ---------------------------------------------------- */

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guess( int num );

int guessNumber( int n )
{
    /* Start with full range [1,n]. */
    int lowBound = 1;
    int highBound = n;

    int mid;
    int feedback;

    /* Find picked value using binary search. */
    while( lowBound <= highBound )
    {
        /* Use a safer equation to calculate the mid-point.
           This avoids integer overflow (INT_MAX = 2^31 - 1) ensuring no large intermediate sum occurs.
           The equation is mathematically identical to (lowBound+highBound)/2;
        */
        mid = ( lowBound + ( ( highBound - lowBound ) / 2 ) );

        /* Call the guess API. */
        feedback = guess( mid );

        /* Guess matches pick. */
        if( feedback == 0 )
            return mid;
        /* Guess too high. */
        else if( feedback == -1 )
            highBound = mid - 1;
        /* Guess too low. */
        else
            lowBound = mid + 1;
    }

    /* Should not reach here if input is valid. */
    return -1;
}
