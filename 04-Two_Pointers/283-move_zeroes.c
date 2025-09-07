/* ----------------------------------------------------
   283. Move Zeroes (06/08/25); JDG - C Solution
   Time complexity : O(n)
   Space complexity: O(1)
   ---------------------------------------------------- */

   #include <stdio.h>

void moveZeroes(int *arrNums, int arrSize){
    /* Pointer to place next non-zero element. */
    int nonZeroIdx = 0;

    /* Traverse through array. */
    for(int i=0; i<arrSize; i++){
        /* Found non-zero value. */
        if(arrNums[i] != 0){
            /* Avoid unncessary swaps. */
            if(i != nonZeroIdx){
                /* Swap elements. */
                arrNums[nonZeroIdx] = arrNums[i];
                arrNums[i] = 0;
            }
        nonZeroIdx++;
        }
    }
}

void printArr(int *arrNums, int arrSize){
    for(int i=0; i<arrSize; i++){
        printf("%d ", arrNums[i]);
    }
    printf("\n");
}

int main(){
    int arrNums[5] = {0,1,0,3,12};
    int numsSize = (sizeof(arrNums)/sizeof(int));
    printArr(arrNums, numsSize);

    moveZeroes(arrNums, numsSize);
    printArr(arrNums, numsSize);

    return 0;
}
