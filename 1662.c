#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool arrayStringsAreEqual(char** word1, int word1Size,
                          char** word2, int word2Size) {
    char str1[100000] = "";
    char str2[100000] = "";

    for(int i = 0; i < word1Size; i++) {
        strcat(str1, word1[i]);
    }

    for(int i = 0; i < word2Size; i++) {
        strcat(str2, word2[i]);
    }

    return strcmp(str1, str2) == 0;
}

int main() {
    char* word1[] = {"ab", "c"};
    char* word2[] = {"a", "bc"};

    printf("%s\n", arrayStringsAreEqual(word1, 2, word2, 2)
           ? "true" : "false");

    return 0;
}