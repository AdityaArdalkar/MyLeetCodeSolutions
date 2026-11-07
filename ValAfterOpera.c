#include <stdio.h>
int finalValueAfterOperations(char** operations, int operationsSize) {
    int x = 0;
    int j = 0;
    for (int i = 0; i < operationsSize; i++) {
        while (operations[i][j] != '\0') {
            if (operations[i][j] == '+') {
                x++;
                break;
            }
            if (operations[i][j] == '-') {
                x--;
                break;
            }
            j++;
        }
    }
    return x;
}
int main() {
    int n;
    printf("Enter the number of operations: ");
    scanf("%d", &n);
    char operations[n][4];
    char *operationPointers[n];
    printf("Enter the operations (++X, X++, --X, X--):\n");
    for (int i = 0; i < n; i++) {
        scanf("%3s", operations[i]);
        operationPointers[i] = operations[i];
    }
    int result = finalValueAfterOperations(operationPointers, n);
    printf("Final value of X: %d\n", result);
    return 0;
}