#include <stdio.h>
int sumOfUnique(int* nums, int numsSize) {
    int sum = 0;
    for (int i = 0; i < numsSize; i++) {
        int copy = nums[i];
        int count = 0;
        for (int j = 0; j < numsSize; j++) {
            if (copy == nums[j]) {
                count++;
            }
        }
        if (count == 1) {
            sum += copy;
        }
    }
    return sum;
}
int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int result = sumOfUnique(nums, n);
    printf("Sum of unique elements: %d\n", result);
    return 0;
}