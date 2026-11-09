#include <stdio.h>
int maxProduct(int* nums,int numsSize){
    int max=(nums[0]-1)*(nums[1]-1),pro;
    for(int i=0;i<numsSize;i++){
        for(int j=0;j<numsSize;j++){
            if(i==j){
                continue;
            }
            pro=(nums[i]-1)*(nums[j]-1);
            if(pro>max){
                max=pro;
            }
        }
    }
    return max;
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