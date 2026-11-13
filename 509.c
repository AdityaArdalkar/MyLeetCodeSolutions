#include <stdio.h>
int fib(int n) {
    int a = 0, b = 1, c, i;
    if (n == 0)
        return 0;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main() {
    int n = 4;
    int result = fib(n);
    printf("Fibonacci Number: %d\n", result);
    return 0;
}