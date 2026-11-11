#include <stdio.h>
int* replaceElements(int* arr, int arrSize, int* returnSize) {
    int max = -1;
    *returnSize = arrSize;
    for (int i = arrSize - 1; i >= 0; i--) {
        int temp = arr[i];
        arr[i] = max;
        if (temp > max) {
            max = temp;
        }
    }
    return arr;
}
int main() {
    int arr[] = {17, 18, 5, 4, 6, 1};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int returnSize;
    int* result = replaceElements(arr, arrSize, &returnSize);
    printf("Replaced Array: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}