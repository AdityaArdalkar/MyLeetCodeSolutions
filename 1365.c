#include <stdio.h>
#include <stdlib.h>
int* smallerNumbersThanCurrent(int* nums,int numsSize,int* returnSize){
    *returnSize=numsSize;
    int* ans=malloc(sizeof(int)*numsSize);
    for(int i=0;i<numsSize;i++){
        int count=0;
        for(int j=0;j<numsSize;j++){
            if(nums[i]>nums[j]){
                count++;
            }
        }
        ans[i]=count;
    }
    return ans;
}
int main(){
    int numsSize;
    printf("Enter array size: ");
    scanf("%d",&numsSize);
    int nums[numsSize];
    printf("Enter array elements: ");
    for(int i=0;i<numsSize;i++){
        scanf("%d",&nums[i]);
    }
    int returnSize;
    int* ans=smallerNumbersThanCurrent(nums,numsSize,&returnSize);
    printf("Result: [");
    for(int i=0;i<returnSize;i++){
        printf("%d",ans[i]);
        if(i<returnSize-1){
            printf(", ");
        }
    }
    printf("]\n");
    free(ans);
    return 0;
}