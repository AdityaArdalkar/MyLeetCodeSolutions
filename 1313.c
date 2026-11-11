#include <stdio.h>
#include <stdlib.h>
int* decompressRLElist(int* nums, int numsSize, int* returnSize) {
    int size = 0;
    for (int i = 0; i < numsSize; i += 2) {
        size += nums[i];
    }
    *returnSize = size;
    int* ans = malloc(sizeof(int) * size);
    int currentIndex = 0;
        for (int i = 0; i < numsSize; i += 2) {
        int freq = nums[i];
        int val = nums[i + 1];
        for (int j = 0; j < freq; j++) {
            ans[currentIndex++] = val;
        }
    }
    return ans;
}
int main() {
    int nums[] = {1, 2, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;
    int* result = decompressRLElist(nums, numsSize, &returnSize);
    printf("Decompressed Array: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);
    return 0;
}