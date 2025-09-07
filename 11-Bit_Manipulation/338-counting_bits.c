/* ----------------------------------------------------
   338. Counting Bits (10/08/25); JDG - C Solution
   Time complexity : O(n)
   Space complexity: O(1)
   ---------------------------------------------------- */

#include <stdlib.h>
#include <stdio.h>

int* countBits(int n, int* returnSize){

    /* Allocate memory. */
    *returnSize = n+1;
    int *arrBits = (int*)malloc(sizeof(int)*(*returnSize));

    /* Base case. */
    arrBits[0] = 0;

    /* The number of 1s in i is the number of 1s in i/2 plus 1 if i is odd. */
    for(int i=1; i<=n; i++){
        arrBits[i] = arrBits[i>>1] + (i&1);
    }

    return arrBits;
}

void printArr(int *arr, int arrSize){
    for(int i=0; i<arrSize; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int n = 7;
    int returnSize = n+1;

    int* arrNoOfBits = countBits(n, &returnSize);
    printArr(arrNoOfBits, returnSize);

    /* Release memory. */
    free(arrNoOfBits);

    return 0;
}
