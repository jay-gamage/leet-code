# ----------------------------------------------------
#  724. Find Pivot Index (24/08/25); JDG - Py Solution
#  Time complexity : O(n)
#  Space complexity: O(1)
#  ----------------------------------------------------

class Solution(object):
    def mergeAlternately(self, word1, word2):
        len1 = len(word1)
        len2 = len(word2)

        i, j = 0, 0
        res = []

        while((i < len1) and (j < len2)):
            res += word1[i]
            res += word2[j]
            i += 1
            j += 1

        while(i < len1):
            res+= word1[i]
            i += 1

        while(j < len2):
            res += word2[j]
            j += 1

        # Convert list of chars to string
        return "".join(res)

if __name__ == "__main__":
    word1 = "abc"
    word2 = "pqrs"

    solution = Solution()

    print(word1)
    print(word2)
    print(solution.mergeAlternately(word1, word2))
