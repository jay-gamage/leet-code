/* ----------------------------------------------------
   1732. Find the Highest Altitude (01/01/25); JDG
   Runtime: 0 ms (100%); Memory: 8.24 MB (26.61%)
   Time complexity : O(n) - Scans array one to find candidate.
   Space complexity: O(1) - Uses only few integer variables.
   ---------------------------------------------------- */

int largestAltitude( int* gain, int gainSize )
{
    int currentAlt = 0;         // Current altitude.
    int maxAlt = 0;             // Maximul altitude achieved.
    
    /* Iterate through gain array. */
    for( int i = 0; i < gainSize; i++ )
    {
        /* Update current altitude. */
        currentAlt += gain[ i ];
        
        /* Update maximum altitutde if current is greater. */
        if( currentAlt > maxAlt )
            maxAlt = currentAlt;
    }

    /* Return maximum altitutde. */
    return maxAlt;
}
