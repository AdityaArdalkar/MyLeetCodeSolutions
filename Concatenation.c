#include <stdio.h>
#include<stdlib.h>
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize * 2;
    int* ans=malloc(sizeof(int)*(*returnSize));
    if(ans == NULL){
        return NULL;
    }
    for(int i=0;i<numsSize;i++){
        if(i<numsSize){
            ans[i]=nums[i];
        }
    }
    for(int i=0;i<numsSize;i++){
        ans[i+numsSize]=nums[i];
    }
    return ans;
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
    int* result = getConcatenation(nums, numsSize, &returnSize);
    if(result == NULL){
        printf("Error in concatenation.\n");
        return 1;
    }
    printf("Concatenated array: ");
    for(int i=0;i<returnSize;i++){
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);
    return 0;
}