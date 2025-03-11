/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies( int* candies, int candiesSize, int extraCandies, int* returnSize )
{
    /* Find current max number of candies by doing a linear search across the array. */
    int maxCandies = candies[ 0 ];
    for( int i = 1; i < candiesSize; i++ )
    {
        if( maxCandies < candies[ i ] )
            maxCandies = candies [ i ];
    }

    /* Allocate memory for result. */
    *returnSize = candiesSize;
    bool* result = (bool* ) malloc( *returnSize * sizeof( bool ) );

    /* Find which kids have greatest number of candies. */
    for( int j = 0; j < *returnSize; j++)
    {
        if ( ( candies[ j ] + extraCandies ) >= maxCandies )
            result[ j ] = true;
        else
            result[ j ] = false;
    }

    return result;
}
