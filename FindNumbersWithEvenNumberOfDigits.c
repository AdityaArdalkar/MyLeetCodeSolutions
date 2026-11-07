#include <stdio.h>
int findNumbers(int* nums, int numsSize) {
    int even_count = 0, copy;
    for (int i = 0; i < numsSize; i++) {
        int digi_count = 0;
        copy = nums[i];
        if (copy == 0) {
            digi_count = 1;
        }
        else {
            while (copy != 0) {
                copy /= 10;
                digi_count++;
            }
        }
        if (digi_count % 2 == 0) {
            even_count++;
        }
    }
    return even_count;
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int result = findNumbers(nums, n);
    printf("Numbers with even digits: %d\n", result);
    return 0;
}