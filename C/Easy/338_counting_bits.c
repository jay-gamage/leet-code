/* ----------------------------------------------------
   338. Counting bits (26/12/24); JDG
   Runtime: 0 ms (100%); Memory: 14.90 MB (78.42%)
   Time complexity : O(n) - Iterates through loop once, each of the 3 operations
                     (bitwise right shift, bitwise AND and addition takes constant time O(1).
   Space complexity: O(1) - Memory allocated for array of size n+1, hence space complexitiy is
                    propotional to the size of the array..
   ---------------------------------------------------- */
int* countBits( int n, int* returnSize ) 
{
    *returnSize = n + 1;    // Output array size is n+1.
    int* result = ( int* ) malloc( ( *returnSize ) * sizeof( int ) );

    /* Base case: the number of 1s in 0 is 0. */
    result[ 0 ] = 0;

    /* For each number from 1 to n, compute the number of 1 bits */
    for( int i = 1; i <= n; i++ )
        result[ i ] = result[ i >> 1 ] + ( i & 1 );  // (i >> 1) is i // 2, (i & 1) checks if i is odd

    return result;
}
/* ---------------------------------------------------- */


/* Less efficient solution. */
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
