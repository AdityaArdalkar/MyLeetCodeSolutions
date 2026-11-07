#include <stdio.h>
int numIdenticalPairs(int* nums, int numsSize) {
    int pair = 0;
    for (int j = 0; j < numsSize; j++) {
        for (int i = 0; i < j; i++) {
            if (nums[i] == nums[j]) {
                pair++;
            }
        }
    }
    return pair;
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int result = numIdenticalPairs(nums, n);
    printf("Number of good pairs: %d\n", result);
    return 0;
}