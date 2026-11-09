#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    *returnSize = candiesSize;
    bool *ans = malloc(sizeof(bool) * candiesSize);
    int max = candies[0];
    for (int i = 1; i < candiesSize; i++) {
        if (candies[i] > max) {
            max = candies[i];
        }
    }
    for (int i = 0; i < candiesSize; i++) {
        if ((candies[i] + extraCandies) >= max) {
            ans[i] = true;
        }
        else {
            ans[i] = false;
        }
    }
    return ans;
}
int main() {
    int candiesSize, extraCandies;
    printf("Enter number of kids: ");
    scanf("%d", &candiesSize);
    int candies[candiesSize];
    printf("Enter candies for each kid:\n");
    for (int i = 0; i < candiesSize; i++) {
        scanf("%d", &candies[i]);
    }
    printf("Enter extra candies: ");
    scanf("%d", &extraCandies);
    int returnSize;
    bool *ans = kidsWithCandies(candies, candiesSize, extraCandies, &returnSize);
    printf("Result: [");
    for (int i = 0; i < returnSize; i++) {
        printf("%s", ans[i] ? "true" : "false");
        if (i < returnSize - 1) {
            printf(", ");
        }
    }
    printf("]\n");
    free(ans);
    return 0;
}