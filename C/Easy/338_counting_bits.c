/* --------------------------------------------------------------------------------------
   338. Counting bits (26/12/24) - Most efficient solution; JDG
   Runtime: 0 ms (100%); Memory: 14.90 MB (78.42%)
   Time complexity : O(n) - Iterates through loop once, each of the 3 operations
                     (bitwise right shift, bitwise AND and addition takes constant time O(1).
   Space complexity: O(1) - Memory allocated for array of size n+1, hence space complexitiy is
                    propotional to the size of the array..
   -------------------------------------------------------------------------------------- */
int* countBits( int n, int* returnSize ) 
{
    *returnSize = n + 1;    // Output array size is n+1.
    int* result = ( int* ) malloc( ( *returnSize ) * sizeof( int ) );

    /* Base case: the number of 1s in 0 is 0. */
    result[ 0 ] = 0;

    /* For each number from 1 to n, compute the number of 1 bits using concept:
       The number of 1s in i is the number of 1s in i/2 plus 1 if i is odd. */
    for( int i = 1; i <= n; i++ )
        result[ i ] = result[ i >> 1 ] + ( i & 1 ); // (i >> 1) is i/2, but faster using bitwise
                                                    // right shift, which divides i by 2 and drops LSB 
                                                    // to reuse a previously computed value.
                                                    // (i & 1) checks if last bit i is set, i.e. is
                                                    // odd, if so, adds 1 to the count, else adds 0.

    return result;
}
/* ---------------------------------------------------- */


/* --------------------------------------------------------------------------------------
   338. Single number (28/06/25) - Less efficient solution; JDG
   Runtime: 6 ms (7.58%); Memory: 14.79 MB (100.00%)
   Time complexity : O(n log(n)) - Slower than liner O(n), but faster than quadratic O(n^2).
                     The number of operations the algorithm performs is proportional to n log(n)
                     due to the nested loop structure.
                     The outer loop runs n times, and the inner loop runs log(n) times.
                     Each operation inside the inner loop takes constant time O(1).
   Space complexity: O(1) - Uses constant extra space: just the 'count' variable.
   -------------------------------------------------------------------------------------- */
int noOfOnes( int i );

int* countBits( int n, int* returnSize )
{
    /* Allocate memory. */
    *returnSize = n+1;
    int* result = ( int* ) malloc( *returnSize * sizeof( int ) );

    /* Count number of 1s in each number. */
    for( int i = 0; i <= n ; i++ )
        result[ i ] = noOfOnes( i );

    return result;
}

/* Helper function to count bits of each number. */
int noOfOnes( int i )
{
    int count = 0;

    if ( i == 0 )
        return 0;           // if number is 0, there are zero 1's.

    while( i > 0 )
    {
        if( i & 1 ){        // Check if LSB is set.
            count++;
        }
        i >>= 1;            // Right-shift to count next bit.
    }

    return count;
}
