/* ----------------------------------------------------
   605. Can Place Flowers (24/08/25); JDG - C++ Solution
   Time complexity : O(n)
   Space complexity: O(1)
   ---------------------------------------------------- */

#include <iostream>
#include <vector>

class Solution {
public:
    bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
        int flowerbedSize = flowerbed.size();
        int plantablePlots = 0;

        for(int i = 0; i < flowerbedSize; i++) {
            int leftEmpty = ((i == 0) || (flowerbed[i-1] == 0));
            int rightEmpty = (( i == flowerbedSize - 1) || (flowerbed[i+1] == 0));

            if((flowerbed[i] == 0) && leftEmpty && rightEmpty) {
                plantablePlots++;
                flowerbed[i] = 1;
            }
        }
        return (n <= plantablePlots);
    }
};

int main() {
    std::vector<int> flowerbed = {1,0,0,0,1};
    int n = 1;
    Solution solution;

    bool result = solution.canPlaceFlowers(flowerbed, n);
    std::cout << (result ? "true" : "false") << '\n';

    return 0;
}