/* ----------------------------------------------------
   1768. Merge Strings Alternately (24/08/25); JDG - CPP Solution
   Time complexity : O(n)
   Space complexity: O(1)
   ---------------------------------------------------- */

#include <iostream>
#include <iostream>

class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        int len1 = word1.size();
        int len2 = word2.size();

        std::string res;
        int i = 0, j = 0;
        while((i < len1) && (j < len2)) {
            res += word1[i++];
            res += word2[j++];
        }

        while(i < len1) {
            res += word1[i++];
        }
        while(j < len2) {
            res += word2[j++];
        }

        return res;
    }
};

int main() {
    Solution solution;

    std::string word1 = "abc";
    std::string word2 = "pqr";

    std::cout << word1 << '\n';
    std::cout << word2 << '\n';
    std::cout << solution.mergeAlternately(word1, word2) << '\n';

    return 0;
}
