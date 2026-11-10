#include <stdio.h>
#include <stdlib.h>
int largestAltitude(int* gain, int gainSize) {
    int* alt = malloc(sizeof(int) * (gainSize + 1));
    if (alt == NULL) {
        return -1;
    }
    alt[0] = 0;
    for (int i = 0; i < gainSize; i++) {
        alt[i + 1] = alt[i] + gain[i];
    }
    int max = alt[0];
    for (int i = 1; i < gainSize + 1; i++) {
        if (alt[i] > max) {
            max = alt[i];
        }
    }
    free(alt);
    return max;
}
int main() {
    int n;
    printf("Enter number of altitude changes: ");
    scanf("%d", &n);
    int* gain = malloc(sizeof(int) * n);
    if (gain == NULL) {
        return 1;
    }
    printf("Enter altitude changes: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &gain[i]);
    }
    int result = largestAltitude(gain, n);
    printf("Highest altitude: %d\n", result);
    free(gain);
    return 0;
}