#include <stdio.h>
#include <string.h>
int mostWordsFound(char** sentences, int sentencesSize) {
    int wordCount = 0;
    for (int i = 0; i < sentencesSize; i++) {
        int j = 0, spaceCount = 0, count;
        if (sentences[i][0] == '\0') {
            spaceCount = -1;
        }
        else {
            while (sentences[i][j] != '\0') {
                if (sentences[i][j] == ' ') {
                    spaceCount++;
                }
                j++;
            }
        }
        count = spaceCount + 1;
        if (count > wordCount) {
            wordCount = count;
        }
    }
    return wordCount;
}
int main() {
    int n;
    printf("Enter the number of sentences: ");
    scanf("%d", &n);
    char sentences[n][1000];
    char *sentencePointers[n];
    getchar(); 
    for (int i = 0; i < n; i++) {
        printf("Enter sentence %d: ", i + 1);
        fgets(sentences[i], sizeof(sentences[i]), stdin);
        sentences[i][strcspn(sentences[i], "\n")] = '\0';
        sentencePointers[i] = sentences[i];
    }
    int result = mostWordsFound(sentencePointers, n);
    printf("\nMaximum number of words: %d\n", result);
    return 0;
}