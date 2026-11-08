#include <stdio.h>
int sumOfMultiples(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            sum += i;
        }
    }
    return sum;
}
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int result = sumOfMultiples(n);
    printf("Sum of multiples: %d\n", result);
    return 0;
}