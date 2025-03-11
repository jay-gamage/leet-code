/* ----------------------------------------------------
   2859. Sum of values at indices with k set bits (05/01/25); JDG
   Runtime: 4 ms (36.10%); Memory: 7.61 MB (43.40%)
   Time complexity : O(1) - Always processes 32 bits - loops runs 32 iterations (constant time).
   Space complexity: O(1) - Only a few fixed variables are used.
   ---------------------------------------------------- */

int sumIndicesWithKSetBits( int* nums, int numsSize, int k )
{
    int sum = 0;
    int setBits;
    int index;

    for( int i = 0; i < numsSize; i++ )
    {
        setBits = 0;
        index = i;

        while( index )
        {
            if( index & 1 )
                setBits++;
            index >>= 1;
        }

        if( setBits == k )
            sum += nums[ i ];
    }

    return sum;
}
