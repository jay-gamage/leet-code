/* ----------------------------------------------------
   1732. Find the Highest Altitude (12/08/25); JDG - C Solution
   Time complexity : O(n)
   Space complexity: O(1)
   ---------------------------------------------------- */

#include <stdio.h>

int largestAltitude(int* gain, int gainSize) {
    int altCur = 0;     // Current altitute.
    int altMax = 0;     // Max altitude.

    for(int i=0; i<gainSize; i++) {
        altCur += gain[i];
        if(altCur>altMax) {
            altMax = altCur;
        }
    }

    return altMax;
}

int main(){
    int arrGain[] = {-5,1,5,0,-7};

    /* Safer to use sizeof(arrGain[0]) instead of sizeof(int) to allow for array type changes in the future. */
    int arrSize = sizeof(arrGain)/sizeof(arrGain[0]);

    printf("%d\n", largestAltitude(arrGain,arrSize));

    return 0;
}