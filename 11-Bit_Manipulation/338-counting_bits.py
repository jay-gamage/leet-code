# ----------------------------------------------------
#  338. Counting Bits (10/08/25); JDG - Py Solution
#  Time complexity : O(n)
#  Space complexity: O(1)
#  ----------------------------------------------------

from typing import List

# List is a dynamic array in Python.
class Solution:
    def countBits(self, n: int) -> List[int]:
        # List must be initialised with n+1 zeros before assigning by index.
        listBits = [0] * (n+1)

        listBits[0] = 0
        for i in range(1, n+1):
            listBits[i] = listBits[i>>1] + (i&1)

        return listBits

if __name__ == "__main__":
    n = 7
    sol1 = Solution()

    listBits = sol1.countBits(n)
    print(listBits)
