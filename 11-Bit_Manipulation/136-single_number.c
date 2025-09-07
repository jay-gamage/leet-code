/* ----------------------------------------------------
   136. Single Number (12/08/25); JDG - C Solution
   Time complexity : O(n)
   Space complexity: O(1)
   ---------------------------------------------------- */

#include <stdio.h>

int singleNumber(int* nums, int numsSize) {
   /* Any number XOR with itself results in 0, so cancels out, leaving number appearing once. */
   int ans = 0;
   for(int i=0; i<numsSize; i++) {
      ans ^= nums[i];
   }

   return ans;
}

int main() {
   int arrNums[] = {4,1,2,1,2};
   int arrSize = sizeof(arrNums)/sizeof(int);

   printf("%d\n", singleNumber(arrNums, arrSize));

   return 0;
}
