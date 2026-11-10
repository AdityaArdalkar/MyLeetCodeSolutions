#include <stdio.h>
int diagonalSum(int** mat,int matSize,int* matColSize){
    int sum=0;
    for(int i=0;i<matSize;i++){
        sum+=mat[i][i];
        if(i!=matSize-1-i){
            sum+=mat[i][matSize-1-i];
        }
    }
    return sum;
}
int main(){
    int n;
    printf("Enter matrix size: ");
    scanf("%d",&n);
    int mat[n][n];
    int* ptr[n];
    int matColSize[n];
    printf("Enter matrix elements:\n");
    for(int i=0;i<n;i++){
        ptr[i]=mat[i];
        matColSize[i]=n;
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int result=diagonalSum(ptr,n,matColSize);
    printf("Matrix diagonal sum: %d\n",result);
    return 0;
}