#include<stdio.h>
int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int count=0,maxCount=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==1){
            count++;
            if(count > maxCount){
                maxCount=count;
            }
        }
        else{
            count=0;
        }
    }
    return maxCount;
}
int main(){
    int nums[]={1,1,0,1,1,1};
    int numsSize=sizeof(nums)/sizeof(nums[0]);
    int result=findMaxConsecutiveOnes(nums,numsSize);
    printf("The maximum number of consecutive 1's is: %d\n",result);
    return 0;
}