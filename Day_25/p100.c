#include <stdio.h>
int main() {
    char str[500];
    char words[100][100];
    char temp[100];
    int wordCount = 0;
    int i = 0, j = 0, k = 0;
    int lengths[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
     i = 0;
    while (str[i] != '\0') {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            i++;
        }
        j = 0;
        while (str[i] != ' ' && str[i] != '\t' &&
               str[i] != '\n' && str[i] != '\0') {
            words[wordCount][j++] = str[i++];
        }
        if (j > 0) {
            words[wordCount][j] = '\0';
            wordCount++;
        }
    }
    for (i = 0; i < wordCount; i++) {
        lengths[i] = 0;
        while (words[i][lengths[i]] != '\0') {
            lengths[i]++;
        }
    }
    for (i = 0; i < wordCount - 1; i++) {
        for (j = 0; j < wordCount - i - 1; j++) {
            if (lengths[j] > lengths[j + 1]) {
                int tempLength = lengths[j];
                lengths[j] = lengths[j + 1];
                lengths[j + 1] = tempLength;
                char tempWord[100];
                strcpy(tempWord, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], tempWord);
            }
        }
    }
    printf("Words sorted by length:\n");
    for (i = 0; i < wordCount; i++) {
        printf("%s (Length: %d)\n", words[i], lengths[i]);
    }
    return 0;
}
