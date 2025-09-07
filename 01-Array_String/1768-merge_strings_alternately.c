/* ----------------------------------------------------
   1768. Merge Strings Alternately (24/08/25); JDG - C Solution
   Time complexity : O(n)
   Space complexity: O(1)
   ---------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* mergeAlternatively(char* word1, char* word2) {
   int len1 = strlen(word1);
   int len2 = strlen(word2);
   int totLen = len1+len2;

   char* res = (char*)malloc(sizeof(char)*(totLen+1));

   /* Merge strings. */
   int i = 0, j = 0, k = 0;
   while((i < len1) && (j < len2)) {
      res[k++] = word1[i++];
      res[k++] = word2[j++];
   }

   /* Append any remaining characters if any string is longer. */
   while(i < len1) {
      res[k++] = word1[i++];
   }
   while(j < len2) {
      res[k++] = word2[j++];
   }

   /* Add NULL character to terminate string. */
   res[totLen] = '\0';

   return res;
}

void printStr(char* str) {
   for(int i = 0; i < strlen(str); i++) {
      printf("%c", str[i]);
   }
   printf("\n");
}

int main() {
   char word1[4] = "abc";
   char word2[5] = "pqrs";

   printStr(word1);
   printStr(word2);
   printStr(mergeAlternatively(word1, word2));

   return 0;
}
