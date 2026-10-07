#include<stdio.h>
int climbStairs(int n);
int main(){
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d", &n);
    int ans = climbStairs(n);
    printf("Number of ways to climb %d stairs: %d\n", n, ans);
    return 0;
}
int climbStairs(int n) {
    int a=0;int b=1;int c;
    for(int i=1;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}