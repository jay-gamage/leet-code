/* ----------------------------------------------------
   338. Counting Bits (10/08/25); JDG - C Solution
   Time complexity : O(n)
   Space complexity: O(1)
   ---------------------------------------------------- */

#include <iostream>
#include <vector>

class Solution{
    public:
        std::vector<int> countBits(int n){
            /* Create vector of size n+1 and initialise all elements to zero. */
            std::vector<int> vecBits(n+1, 0);

            for(int i=1; i<=n; i++){
                vecBits[i] = vecBits[i>>1] + (i&1);     // Brackets required for operator precedence.
            }

            return vecBits;
        }
};

void vecPrint(std::vector<int> &vecNums){
    for(int nums:vecNums){
        std::cout << nums << " ";
    }
    std::cout << std::endl;
}

int main(){
    Solution sol1;

    int n = 7;
    std::vector<int> vecBits(n);

    vecBits = sol1.countBits(n);
    vecPrint(vecBits);

    return 0;
}