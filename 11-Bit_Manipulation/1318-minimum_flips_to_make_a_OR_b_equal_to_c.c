/* ----------------------------------------------------
   1318. Minimum Flips to Make a OR b Equal to c (17/08/25); JDG - C Solution
   Time complexity : O(n)
   Space complexity: O(1)
   ---------------------------------------------------- */

#include <stdio.h>

int minFlips(int a, int b, int c) {
    int count = 0;
    while(a || b || c) {
        int aBit = a&1;
        int bBit = b&1;
        int cBit = c&1;

        if((aBit|bBit) != cBit) {
            if(cBit==1) {
                count++;
            }
            else {
                count+= (aBit+bBit);
            }
        }
    a>>=1;
    b>>=1;
    c>>=1;
    }
    return count;
}

int main() {
    int a = 2;
    int b = 6;
    int c = 5;

    printf("%d\n", minFlips(a,b,c));

    return 0;
}
