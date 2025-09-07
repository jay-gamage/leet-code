# ----------------------------------------------------
#  1732. Find the Highest Altitude (12/08/25); JDG - Py Solution
#  Time complexity : O(n)
#  Space complexity: O(1)
#  ----------------------------------------------------

from typing import List

class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        altCur = 0
        altMax = 0

        for i in range(len(gain)):
            altCur += gain[i]
            if (altCur>altMax):
                altMax = altCur

        return altMax

if __name__ == "__main__":
    solution = Solution()
    gain = [-5,1,5,0,-7]

    print(solution.largestAltitude(gain))
