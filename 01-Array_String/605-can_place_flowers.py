# ----------------------------------------------------
#  608. Can Place Flowers (24/08/25); JDG - Py Solution
#  Time complexity : O(n)
#  Space complexity: O(1)
#  ----------------------------------------------------

from typing import List

class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n:int) -> bool:
        flowerbedSize = len(flowerbed)
        plantablePlots = 0

        for i in range(len(flowerbed)):
            leftEmpty = ((i == 0) or (flowerbed[i-1] == 0))
            rightEmpty = ((i == (flowerbedSize - 1)) or flowerbed[i+1] == 0)

            if(i == 0 and leftEmpty and rightEmpty):
                plantablePlots+=1
                flowerbed[i] = 1

        return (n <= plantablePlots)

if __name__ == "__main__":
    flowerbed = [1,0,0,0,1]
    n = 1
    solution = Solution()

    print(solution.canPlaceFlowers(flowerbed, n))
