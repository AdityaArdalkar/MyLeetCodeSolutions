#include <stdio.h>
int differenceOfSum(int* nums, int numsSize) {
    int digisum = 0, elesum = 0, copy;
    for (int i = 0; i < numsSize; i++) {
        int once = 1;
        copy = nums[i];
        while (copy != 0) {
            if (once == 1) {
                elesum += copy;
                once = 0;
            }
            digisum += copy % 10;
            copy /= 10;
        }
    }
    return elesum - digisum;
}
int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter array elements: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int result = differenceOfSum(nums, n);
    printf("Difference: %d\n", result);
    return 0;
}