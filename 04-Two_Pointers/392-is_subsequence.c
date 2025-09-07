/* ----------------------------------------------------
   392. Is Subsequence (06/08/25); JDG - C Solution
   Time complexity : O(n)
   Space complexity: O(1)
   ---------------------------------------------------- */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isSequence(char *s, char *t){
   int sLen = strlen(s);       // strlen counts number of chars before null terminator:'\0'.
   int tLen = strlen(t);

   /* Edge cases handling. */
   /* If s is empty, it is a subsequence of any t. This must be checked before t. */
   if(sLen == 0){   // An empty string is checked by (strLen==0) or (str[0]=='\0').
      return true;
   }

   /* If t is empty, any non-empty s cannot be a subsequence of t. */
   if(tLen == 0){
      return false;
   }

   /* Traverse through string t and check for characters from s in order. */
   for(int chkIdx=0, i=0; i<tLen; i++){
      if(t[i] == s[chkIdx]){
         chkIdx++;
      }
      /* All characters in s present. */
      if(chkIdx >= sLen){
         return true;
      }
   }

   return false;
}

int main(){
   char strS[4] = "abc";
   char strT[7] = "ahbgdc";

   if(isSequence(strS, strT)){
      printf("true");
   }
   else{
      printf("false");
   }
   printf("\n");

   return 0;
}