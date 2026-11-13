#include <stdio.h>
int hammingWeight(int n) {
    int count = 0;
    while (n != 0) {
        if (n % 2 == 1) {
            count++;
        }
        n /= 2;
    }
    return count;
}
int main() {
    int n = 11;
    int result = hammingWeight(n);
    printf("Number of 1 Bits: %d\n", result);
    return 0;
}