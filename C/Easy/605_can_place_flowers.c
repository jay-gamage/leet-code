bool canPlaceFlowers( int* flowerbed, int flowerbedSize, int n )
{
    int count = 0;
    int prev;
    int next;

    for( int i = 0; i < flowerbedSize; i++ )
    {
        /* Found empty plot. */
        if( flowerbed[ i ] == 0 )
        {
            /* Handling edge-cases, where there is an empty plot at the beginning or end. */
            prev = ( i == 0 ) ? 0 : flowerbed[ i - 1];
            next = ( i == flowerbedSize - 1 ) ? 0: flowerbed[ i + 1 ];

            /* If adjacent plots are empty, plant flower. */
            if( prev == 0 && next == 0 )
            {
                flowerbed[ i ] = 1;
                count++;

                /* If all new flowers are planted, return. */
                if( count >= n )
                    return true;
            }
        }
    }
    return( n <= count );
}
