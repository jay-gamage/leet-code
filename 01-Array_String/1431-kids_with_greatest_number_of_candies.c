/* ----------------------------------------------------
   1431. Kids with the Greatest Number of Candies (25/08/25); JDG - C Solution
   Time complexity : O(n)
   Space complexity: O(1)
   ---------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int maxCandies = candies[0];
    for(int i = 1; i < candiesSize; i++) {
        if(candies[i] > maxCandies) {
            maxCandies = candies[i];
        }
    }

    *returnSize = candiesSize;
    bool* result = (bool*) malloc(sizeof(bool)*(*returnSize));

    for(int i = 0; i < *returnSize; i++) {
        if((candies[i] + extraCandies) >= maxCandies) {
            result[i] = true;
        } else {
            result[i] = false;
        }
    }
    return result;
}

void printArr(bool* arr, int arrSize) {
    for(int i = 0; i < arrSize; i++) {
        printf("%s ", (arr[i] ? "true" : "false"));
    }
    printf("\n");
}

int main() {
    int candies[] = {2, 3, 5, 1, 3};
    int candiesSize = (sizeof(candies)/sizeof(candies[0]));
    int extraCandies = 3;
    int returnSize = 0;

    bool *result = kidsWithCandies(candies, candiesSize, extraCandies, &returnSize);
    printArr(result, returnSize);

    return 0;
}
