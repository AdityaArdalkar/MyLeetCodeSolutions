#include <stdio.h>
#include <stdlib.h>
int maximumWealth(int** accounts,int accountsSize,int* accountsColSize){
    int max=0;
    for(int j=0;j<accountsColSize[0];j++){
        max+=accounts[0][j];
    }
    for(int i=1;i<accountsSize;i++){
        int sum=0;
        for(int j=0;j<accountsColSize[i];j++){
            sum+=accounts[i][j];
        }
        if(sum>max){
            max=sum;
        }
    }
    return max;
}
int main(){
    int accountsSize,accountsColSize;
    printf("Enter number of customers: ");
    scanf("%d",&accountsSize);
    printf("Enter number of banks per customer: ");
    scanf("%d",&accountsColSize);
    int **accounts=malloc(accountsSize*sizeof(int*));
    for(int i=0;i<accountsSize;i++){
        accounts[i]=malloc(accountsColSize*sizeof(int));
        printf("Enter money for customer %d:\n",i+1);
        for(int j=0;j<accountsColSize;j++){
            scanf("%d",&accounts[i][j]);
        }
    }
    int *colSize=malloc(accountsSize*sizeof(int));
    for(int i=0;i<accountsSize;i++){
        colSize[i]=accountsColSize;
    }
    int result=maximumWealth(accounts,accountsSize,colSize);
    printf("Maximum Wealth: %d\n",result);
    for(int i=0;i<accountsSize;i++){
        free(accounts[i]);
    }
    free(accounts);
    free(colSize);
    return 0;
}