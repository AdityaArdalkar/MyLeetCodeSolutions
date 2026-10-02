#include<stdio.h>
#include<stdlib.h>
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    *returnSize=numsSize;
    int* ans=malloc(sizeof(int)*numsSize);
    if(ans==NULL){
        return NULL;
    }
    for(int i=0;i<n;i++){
        ans[2*i]=nums[i];
        ans[2*i+1]=nums[i+n];
    }
    return ans;
}
int main(){
    int nums[]={2,5,1,3,4,7};
    int numsSize=6;
    int n=3;
    int returnSize;
    int* result=shuffle(nums,numsSize,n,&returnSize);
    for(int i=0;i<returnSize;i++){
        printf("%d ",result[i]);
    }
    printf("\n");
    free(result);
    return 0;
}