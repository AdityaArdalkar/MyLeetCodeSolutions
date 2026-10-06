#include<stdio.h>
int searchInsert(int* nums, int numsSize, int target) {
    int j;
    for(int i=0;i<numsSize;i++){
        if(target<=nums[i]){
            j=i;
            break;
        }
        else{
            j=numsSize;
        }
    }
    return j;
}
int main() {
    int target, numsSize;
    printf("Enter the size of your array: ");
    scanf("%d", &numsSize);
    printf("Enter the target: ");
    scanf("%d", &target);
    int nums[numsSize];
    printf("Enter the elements of your array:\n");
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    int result = searchInsert(nums, numsSize, target);
    printf("Index: %d\n", result);
    return 0;
}