# ----------------------------------------------------
#  392. Is Subsequence (06/08/25); JDG - Py Solution
#  Time complexity : O(n)
#  Space complexity: O(1)
#  ----------------------------------------------------

class Solution:
    def isSubSequence(self, s: str, t: str) -> bool:
        sLen = len(s)
        tLen = len(t)

        if sLen == 0:
            return True
        if tLen == 0:
            return False

        chkIdx = 0
        for i in range(tLen):
            if t[i] == s[chkIdx]:
                chkIdx+=1
            if chkIdx>=sLen:
                return True

        return False

if __name__ == "__main__":
    strS = "abc"
    strT = "ahbdxc"

    sol1 = Solution()

    if sol.isSubSequence(strS, strT):
        print("true")
    else:
        print("false")
