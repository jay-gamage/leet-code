/* ----------------------------------------------------
   643. Maximum Average Subarray I (29/12/24); JDG
   Runtime: 0 ms (100%); Memory: 16.33 MB (50.26%)
   Time complexity : O(n) - Calculation sum of first k elements is O(k), the while loop
                            calculates remaining elements once, O(n-k), resulting in an
                            overall complexity of O(n).
   Space complexity: O(1) - Solution uses only a few variables.
   ---------------------------------------------------- */

double findMaxAverage( int* nums, int numsSize, int k )
{
    /* Find average of initial k elements. The sum can be of type int. */
    int sum = 0;
    for( int i = 0; i < k; i++)
        sum += nums[ i ];

    /* Initialise maxSum with initial sum. */
    int maxSum = sum;

    /* Solve using sliding window technique. */
    /* Edge case handling - if k==numsSize, initial average of first k elements is returned. */
    for( int i = k; i < numsSize; i++)
    {
        /* Calculate sum of next k elements.*/
        sum += ( nums[ i ] - nums[ i - k ] );

        /* Update sum if greater. */
        if( sum > maxSum )
            maxSum = sum;
    }

    /* Upgrade to double and return maximum average. */
    return ( ( double )maxSum / k );
}
