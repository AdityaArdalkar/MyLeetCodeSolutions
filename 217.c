#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int compare(const void* a, const void* b) {
    int x = *(const int*)a;
    int y = *(const int*)b;
    return (x > y) - (x < y);
}
bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            return true;
        }
    }
    return false;
}
int main() {
    int nums[] = {4, 2, 7, 2, 9};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    bool result = containsDuplicate(nums, numsSize);
    printf("Contains Duplicate: %s\n",
           result ? "true" : "false");
    return 0;
}