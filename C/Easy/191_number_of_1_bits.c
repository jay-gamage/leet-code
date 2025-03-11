/* ----------------------------------------------------
   191. Number of 1 Bits (28/12/24); JDG
   Runtime: 0 ms (100%); Memory: 7.99 MB (67.35%)
   Time complexity : O(n) - Maximum of lenA or lenB traveresed. Each iteration performs
                            constant-time operations O(1).
   Space complexity: O(n) - Result is modified in place, hence space used is proportional to the
                            size of the largest binary string plus one for possible carry bit.
                            n is maximum of lenA and lenB.
   ---------------------------------------------------- */

int hammingWeight( int n )
{
    /* Count number of set bits. */
    int setBitCount = 0;
    while( n )
    {
        setBitCount += ( n & 1 );   // Add 1 if LSB is set.
        n >>= 1;                    // Shifting right by 1 means diving by 2; to check next bit.
    }

    return setBitCount;
}
