#include <stdio.h>

int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;

    for (int i = 1; i < numsSize; i++) {
        nums[i] = nums[i] + nums[i - 1];
    }

    return nums;
}
int main(){
    int numsSize;
    printf("Enter the size of your array: ");
    scanf("%d", &numsSize);
    int nums[numsSize];
    printf("Enter the elements of your array: ");
    for(int i=0;i<numsSize;i++){
        scanf("%d", &nums[i]);
    }
    int returnSize;
    int* result = runningSum(nums, numsSize, &returnSize);
    if(result == NULL){
        printf("Error in calculating running sum.\n");
        return 1;
    }
    printf("Running sum array: ");
    for(int i=0;i<returnSize;i++){
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}