/* ----------------------------------------------------
   1431. Kids with the Greatest Number of Candies (25/08/25); JDG - CPP Solution
   Time complexity : O(n)
   Space complexity: O(1)
   ---------------------------------------------------- */

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<bool> kidswithCandies(std::vector<int>& candies, int extraCandies) {
        int maxCandies = 0;
        for(int i : candies) {
            if(i > maxCandies) {
                maxCandies = i;
            }
        }

        std::vector<bool> result(candies.size());
        for(int i = 0; i < candies.size(); i++) {
            if((candies[i] + extraCandies) >= maxCandies) {
                result[i] = true;
            } else {
                result[i] = false;
            }
        }
        return result;
    }
};

void printVec(std::vector<bool> vec) {
    for(int i : vec) {
        std::cout << i << " ";
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;
    Solution solution;

    std::vector<bool> result = solution.kidswithCandies(candies, extraCandies);
    printVec(result);

    return 0;
}
