/* ----------------------------------------------------
   67. Add Binary (27/12/24); JDG
   Runtime: 0 ms (100%); Memory: 8.08 MB (54.17%)
   Time complexity : O(n) - Maximum of lenA or lenB traveresed. Each iteration performs
                            constant-time operations O(1).
   Space complexity: O(n) - Result is modified in place, hence space used is proportional to the
                            size of the largest binary string plus one for possible carry bit.
                            n is maximum of lenA and lenB.
   ---------------------------------------------------- */

#define MAX( a, b ) ( ( a > b ) ? a : b )

char* addBinary( char* a, char* b )
{
    int lenA = strlen( a );
    int lenB = strlen( b );

    /* void* calloc(size_t num, size_t size);
    /* Note that calloc initialises elements to zero in comparison to malloc, and takes parameters
    number and size. +2 required for carry and '/0' null terminator. */
    char* result = ( char* ) calloc( MAX( lenA, lenB ) + 2, sizeof( char ) );
    
    int carry = 0;

    /* Start from LSB. */
    int idxA = strlen( a ) - 1;
    int idxB = strlen( b ) - 1;

    /* Calculate sum and carry. */
    for ( int i = MAX( lenA, lenB ); i >= 0; i--)
    {
        int bit = carry;
        if ( idxA >= 0 )
            bit += a[ idxA-- ] - '0';   // ASCII value of '0' is 48; - '0' required when converting to int.
        
        if ( idxB >= 0 )
            bit += b[ idxB-- ] - '0';
        
        carry = bit >> 1;   // Carry is the result of bit divided by 2, hence the >> 1.
        result[ i ] = ( bit % 2 ) + '0';    // bit % 2 gives the LSBl; + '0' required when converting back to char.
    }
    
    /* There maybe a leading zero if there was no carry. If result starts with a '0',
       return the string without the leading zero; return a pointer to to the second
       character in the string, i.e. result + 1. */
    return result + ( result[ 0 ] == '0' );
}
