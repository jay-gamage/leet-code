/* ----------------------------------------------------
   392. Is Subsequence (06/08/25); JDG - C++ Solution
   Time complexity : O(n)
   Space complexity: O(1)
   ---------------------------------------------------- */

#include <iostream>
#include <string>

class Solution{
   public:
      bool isSubsequence(std::string s, std::string t){
         int sLen = s.length();
         int tLen = t.length();

         if(s == ""){
            return true;
         }
         if(t == ""){
            return false;
         }

         for(int chkIdx=0, i=0; i<tLen; i++){
            if(t[i] == s[chkIdx]){
               chkIdx++;
            }
            if(chkIdx >= sLen){
               return true;
            }
         }

         return false;
      }
};

int main(){
   std::string strS = "abc";
   std::string strT = "ahbgdc";

   Solution sol;

   if(sol.isSubsequence(strS, strT)){
      std::cout << "true" << std::endl;
   }
   else{
      std::cout << "false" << std::endl;
   }

   return 0;
}