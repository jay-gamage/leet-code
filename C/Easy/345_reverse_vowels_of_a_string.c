bool isVowel( char c )
{
    c = tolower( c );
    return ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' );
}

char* reverseVowels( char* s )
{
    int startIdx = 0;
    int endIdx = strlen( s ) - 1;
    char temp;

    while( startIdx < endIdx )
    {
        /* Found first vowel. */
        if( isVowel( s[ startIdx ] ) )
        {
            while( endIdx > startIdx )
            {
                /* Found vowel at opposite end. */
                if( isVowel( s[ endIdx ] ) )
                {
                    /* Swap values. */
                    temp = s[ startIdx ];
                    s[ startIdx ] = s[ endIdx ];
                    s[ endIdx ] = temp;
                    endIdx--;
                    break;
                }
                endIdx--;
            }
        }
    startIdx++;
    }

    return s;
}
