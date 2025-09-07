/* ----------------------------------------------------
   724. Find Pivot Index (19/08/25); JDG - C Solution
   Time complexity : O(n)
   Space complexity: O(1)
   ---------------------------------------------------- */

#include <stdio.h>

int pivotIndex(int* nums, int numsSize) {
    int totalSum = 0;
    for(int i = 0; i < numsSize; i++) {
        totalSum += nums[i];
    }

    int leftSum = 0;
    int rightSum = totalSum;
    for(int i = 0; i < numsSize; i++) {
        rightSum -= nums[i];

        if(leftSum == rightSum) {
            return i;
        }
        leftSum += nums[i];
    }
    return -1;
}

int main() {
    int numsArr[] = {1, 7, 3, 6, 5, 6};
    int numsSize = (sizeof(numsArr) / sizeof(numsArr[0]));

    printf("%d\n", pivotIndex(numsArr, numsSize));

    return 0;
}