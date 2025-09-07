# ----------------------------------------------------
#  136. Single Number (12/08/25); JDG - Py Solution
#  Time complexity : O(n)
#  Space complexity: O(1)
#  ----------------------------------------------------

from typing import List

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        ans = 0
        for i in range(len(nums)):
            ans ^= nums[i]

        return ans

if __name__ == "__main__":
    nums = [4,1,2,1,2]
    solution = Solution()

    print(solution.singleNumber(nums))
