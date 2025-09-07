# ----------------------------------------------------
#  724. Find Pivot Index (19/08/25); JDG - Py Solution
#  Time complexity : O(n)
#  Space complexity: O(1)
#  ----------------------------------------------------

from typing import List

class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        totalSum = sum(nums)

        leftSum = 0
        rightSum = totalSum
        for i in range(len(nums)):
            rightSum -= nums[i]

            if(rightSum == leftSum):
                return i
            leftSum += nums[i]

        return -1

if __name__ == "__main__":
    nums = [1, 7, 3, 6, 5, 6]
    solution = Solution()

    print(solution.pivotIndex(nums))
