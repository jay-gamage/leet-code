/* ----------------------------------------------------
   136. Single Number (12/08/25); JDG - C++ Solution
   Time complexity : O(n)
   Space complexity: O(1)
   ---------------------------------------------------- */

#include <iostream>
#include <vector>

class Solution {
    public:
        int singleNumber(std::vector<int> &vecNums) {
            int ans = 0;

            /* Range based loop introduced in C++11, assigns value of each element to num in order. */
            for(int num: vecNums) {
                ans ^= num;
            }

            return ans;
        }
};

int main() {
    Solution sol1;
    std::vector<int> vecNums = {4,1,2,1,2};

    std::cout << sol1.singleNumber(vecNums) << std::endl;

    return 0;
}