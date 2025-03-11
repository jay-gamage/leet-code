/* ----------------------------------------------------
   326. Is Subsequence (28/12/24); JDG
   Runtime: 0 ms (100%); Memory: 7.86 MB (43.68%)
   Time complexity : O(n) - Looped once through string t and each operation inside is O(1).
   Space complexity: O(1) - No extra space is used except input string and few int variables.
   ---------------------------------------------------- */

bool isSubsequence( char* s, char* t )
{
    int chkIdx = 0;
    int tLen = strlen ( t );
    int sLen = strlen ( s );

    /* Edge cases handling. */
    /* If s is empty, it is a subsequence of any t. This must be checked before t. */
    if ( sLen == 0 )    // An empty string is checked by (strLength == 0) or (str[0] == '\0').
        return true;

    /* If t is empty, any non-empty s cannot be a subsequence of t. */
    if ( tLen == 0 )
        return false;
    
    /* Traverse through string t and check for characters from s in order.*/
    for( int i = 0; i < tLen; i++ )
    {
        if( t[ i ] == s[ chkIdx ] )
            chkIdx++;

        /* All characters in s present, hence no further checks required. */
        if( chkIdx >= sLen )
            return true;
    }

    return false;
}
