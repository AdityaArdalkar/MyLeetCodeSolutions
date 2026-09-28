/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int a,b;
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                a=i;
                b=j;
                break;
            }
        }
    }
    int *ans = malloc(2*sizeof(int));
    if(ans==NULL){
        return NULL;
    }
    ans[0]=a;
    ans[1]=b;
    return ans;
}

int main() {
    int target, numsSize;

    printf("Enter the size of your array: ");
    scanf("%d", &numsSize);

    printf("Enter the target sum: ");
    scanf("%d", &target);

    int nums[numsSize];

    printf("Enter the elements of your array:\n");

    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    int returnSize;

    int *result = twoSum(nums, numsSize, target, &returnSize);

    if (result != NULL) {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
        free(result);
    }
    else {
        printf("No valid pair found.\n");
    }

    return 0;
}