/* ----------------------------------------------------
   1732. Find the Highest Altitude (12/08/25); JDG - C++ Solution
   Time complexity : O(n)
   Space complexity: O(1)
   ---------------------------------------------------- */

#include <iostream>
#include <vector>

class Solution {
    public:
        int largestAltitude(std::vector<int>& gain) {
            int altCur = 0;
            int altMax = 0;

            for(int g: gain){
                altCur += g;
                altMax = std::max(altCur,altMax);
            }

            return altMax;
        }
};

int main(){
    Solution sol1;
    std::vector<int> vecGain = {-5,1,5,0,-7};

    std::cout << sol1.largestAltitude(vecGain) << std::endl;

    return 0;
}