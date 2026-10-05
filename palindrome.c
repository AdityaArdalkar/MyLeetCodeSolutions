#include<stdbool.h>
#include<stdio.h>
#include<limits.h>
bool isPalindrome(int x) {
    int og=x;
    int rev = 0, place = 1;
    while (x != 0) {
        int pop = x % 10;
        x /= 10;
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
        rev = (rev * place) + pop;
        place = 10;
    }
    if(og<0){
        return false;
    }
    else if(og==rev){
        return true; 
    }
    else{
        return false;
    }
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(isPalindrome(num)){
        printf("%d is a palindrome number\n",num);
    }
    else{
        printf("%d is not a palindrome number\n",num);
    }
    return 0;
}