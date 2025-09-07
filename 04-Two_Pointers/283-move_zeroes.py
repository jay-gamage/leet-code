# ----------------------------------------------------
#  283. Move Zeroes (06/08/25); JDG - Py Solution
#  Time complexity : O(n)
#  Space complexity: O(1)
#  ----------------------------------------------------

def moveZeroes(arrNums):
    nonZeroIdx = 0

    for i in range(len(arrNums)):
        if arrNums[i] != 0:
            if nonZeroIdx != i:
                arrNums[nonZeroIdx] = arrNums[i]
                arrNums[i] = 0
            nonZeroIdx+=1

if __name__ == "__main__":
    arrNums = [0,1,0,3,12]
    print(arrNums)

    moveZeroes(arrNums)
    print(arrNums)
