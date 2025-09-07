# ----------------------------------------------------
#  1431. Kids with the Greatest Number of Candies (25/08/25); JDG - Py Solution
#  Time complexity : O(n)
#  Space complexity: O(1)
#  ----------------------------------------------------

from typing import List

class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        maxCandies = max(candies)
        return[((c + extraCandies) >= maxCandies) for c in candies]

if __name__ == "__main__":
    candies = [2, 3, 5, 1, 3]
    extraCandies = 3
    solution = Solution()

    print(solution.kidsWithCandies(candies, extraCandies))
