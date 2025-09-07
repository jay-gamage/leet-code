/* ----------------------------------------------------
   283. Move Zeroes (06/08/25); JDG - C++ Solution
   Time complexity : O(n)
   Space complexity: O(1)
   ---------------------------------------------------- */

#include <iostream>
#include <vector>

class Solution{
    public:
        void moveZeroes(std::vector<int> &vecNums){
            int nonZeroIdx = 0;

            for(int i=0; i<vecNums.size(); i++){
                if(vecNums[i] != 0){
                    if(i != nonZeroIdx){
                        std::swap(vecNums[i], vecNums[nonZeroIdx]);
                    }
                nonZeroIdx++;
                }
            }
        }
};

void printVec(std::vector<int> &vecNums){
    for(int num:vecNums)
        std::cout << num << " ";
    std::cout << std::endl;
}

int main() {
    Solution sol;
    std::vector<int> vecNums = {0,1,0,3,12};
    printVec(vecNums);

    sol.moveZeroes(vecNums);
    printVec(vecNums);

    return 0;
}
