/* ----------------------------------------------------
   605. Can Place Flowers (24/08/25); JDG - C Solution
   Time complexity : O(n)
   Space complexity: O(1)
   ---------------------------------------------------- */

#include <stdio.h>
#include <stdbool.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int plantablePlots = 0;

    for(int i = 0; i < flowerbedSize; i++) {
        int leftEmpty = ((i == 0) || (flowerbed[i-1] == 0));
        int rightEmpty = ((i == (flowerbedSize-1)) || (flowerbed[i+1] == 0));

        if((flowerbed[i] == 0) && leftEmpty && rightEmpty) {
            plantablePlots++;
            flowerbed[i] = 1;
        }
    }
    return (n <= plantablePlots);
}

int main() {
    int flowerbed[] = {1,0,0,0,1};
    int flowerbedSize = (sizeof(flowerbed)/sizeof(flowerbed[0]));
    int n = 1;

    bool result = canPlaceFlowers(flowerbed, flowerbedSize, n);
    printf("%s\n", result ? "true" : "false");

    return 0;
}