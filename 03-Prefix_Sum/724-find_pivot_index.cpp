/* ----------------------------------------------------
   724. Find Pivot Index (19/08/25); JDG - CPP Solution
   Time complexity : O(n)
   Space complexity: O(1)
   ---------------------------------------------------- */

#include <iostream>
#include <vector>
#include <numeric>

class Solution {
public:
    int pivotIndex(std::vector<int>& nums) {
        int totalSum = std::accumulate(nums.begin(), nums.end(), 0);

        int leftSum = 0;
        int rightSum = totalSum;
        for(int i = 0; i < nums.size(); i++) {
            rightSum -= nums[i];

            if(rightSum == leftSum) {
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};

int main() {
    std::vector<int> nums = {1, 7, 3, 6, 5, 6};
    Solution solution;

    std::cout << solution.pivotIndex(nums) << '\n';

    return 0;
}