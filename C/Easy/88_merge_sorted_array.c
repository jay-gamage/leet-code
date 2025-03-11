/* ----------------------------------------------------
   88. Merge sorted array (28/12/24); JDG
   Runtime: 0 ms (100%); Memory: 9.97 MB (48.99%)
   Time complexity : O(m+n) - Looped through merged array.
   Space complexity: O(1) - No additional space is used.
   ---------------------------------------------------- */
void merge( int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n )
{
    int i = m - 1;      // Place pointer at last sorted element in nums1.
    int j = n - 1;      // Place pointer at last (sorted) element in nums2.
    int k = m + n - 1;  // Place pointer at last element in nums1.

    /* Start comparing from the end of each array and place the largest at the end of nums1. */
    while( ( i >= 0 ) && ( j >= 0 ) )   // Compare while both are true!
    {
        if( nums1[ i ] > nums2[ j ] )
            nums1[ k-- ] = nums1[ i-- ];
        else
            nums1[ k-- ] = nums2[ j-- ];
    }

    /* Copy any remaining elements in nums2. */
    while( j >= 0 )
        nums1[ k-- ] = nums2[ j-- ];
}


/* ----------------------------------------------------
   Less efficient solution.
   Runtime: 0 ms (100%); Memory: 9.94 MB (48.99%)
   Time complexity : O((m+n)^2) at worst case; O(m+n) at best case if array is already sorted.
   Space complexity: O(1) - No additional space is used.
   ---------------------------------------------------- */
void merge( int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n )
{
    /* Contacatane nums2 at the end of nums1. */
    for( int i = m, j = 0; ( i < ( m + n ) ) || ( j < n ); i++, j++ )
        nums1[ i ] = nums2[ j ];

    /* Bubble sort - sort in ascending order.
       arrayLength-1 passes required to guarantee array is sorted.
       A swapped flag is used to confirm if no additional passes are required if array is sorted. */
    for( int pass = 0; pass < m + n ; pass++ )
    {
        bool swapped = false;
        for( int k = 0; k < (m + n) - 1 ; k++ ) // arrayLength-2 is used comparison to avoid buffer overflow.
        {
            if( nums1[ k ] > nums1[ k + 1 ] )
            {
                int temp = nums1[ k ];
                nums1[ k ] = nums1 [ k + 1 ];
                nums1[ k + 1 ] = temp;
                swapped = true;
            }
        }
        /* If no elements are swapped, array is sorted. */
        if( !swapped)
            break;
    }
}