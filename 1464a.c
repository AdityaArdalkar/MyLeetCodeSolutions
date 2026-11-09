#include <stdio.h>

int maxProduct(int* nums,int numsSize){
    int max1=0,max2=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]>max1){
            max2=max1;
            max1=nums[i];
        }
        else if(nums[i]>max2){
            max2=nums[i];
        }
    }
    return (max1-1)*(max2-1);
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
    int result=maxProduct(nums,numsSize);
    printf("Maximum Product: %d\n",result);
    return 0;
}