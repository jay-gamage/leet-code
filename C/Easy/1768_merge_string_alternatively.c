char * mergeAlternately( char * word1, char * word2 )
{
    int lenWord1 = strlen( word1 );
    int lenWord2 = strlen( word2 );
    int totalLen = lenWord1 + lenWord2;

    /* Allocate memory for merged word. */
    char* mergedWord = ( char* ) malloc( ( totalLen + 1 ) * sizeof( char ) );

    /* Define pointers to itreate through char array. */
    int i = 0;                          // Pointer for word1
    int j = 0;                          // Pointer for word2

    /* Merge letters until complete. */
    while( i+j != totalLen )
    {
        /* Merge chars from word1. */
        if( i < lenWord1 )
        {
            mergedWord[ i + j ] = word1[ i ];
            i++;
        }

        /* Merge chars from word2. */
        if( j < lenWord2 )
        {
            mergedWord[ i + j ] = word2[ j ];
            j++;
        }
    }

    /* Append null terminator to complete string. */
    mergedWord[ totalLen ] = '\0';

    return mergedWord;
}
