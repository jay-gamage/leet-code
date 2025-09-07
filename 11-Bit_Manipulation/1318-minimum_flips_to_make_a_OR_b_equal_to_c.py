# ----------------------------------------------------
#  1318. Minimum Flips to Make a OR b Equal to c (19/08/25); JDG - Py Solution
#  Time complexity : O(n)
#  Space complexity: O(1)
#  ----------------------------------------------------

class Solution:
    def minFlips(self, a: int, b: int, c:int) -> int:
        count = 0
        while(a or b or c):
            aBit = a & 1
            bBit = b & 1
            cBit = c & 1

            if((aBit | bBit) != cBit):
                if(cBit == 1):
                    count += 1
                else:
                    count += (aBit + bBit)

            a >>= 1
            b >>= 1
            c >>= 1

        return count

if __name__ == "main":
    a = 2
    b = 6
    c = 5

    solution = Solution()

    print(solution.minFlips(2, 6, 5))