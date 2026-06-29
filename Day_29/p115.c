#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s[100], t[100];
    int i, j, choice, count;
    char tmp;
    do {
        printf("\n1.Input 2.Length 3.Upper 4.Lower 5.Reverse 6.Concat 7.Compare 8.Copy 9.Count Vowels 10.Palindrome 11.Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        getchar();
        switch (choice) {
            case 1:
                printf("Enter string: "); fgets(s, 100, stdin);
                s[strcspn(s, "\n")] = 0;
                break;
            case 2:
                printf("Length = %d\n", (int)strlen(s));
                break;
            case 3:
                for (i = 0; s[i]; i++) s[i] = toupper(s[i]);
                printf("Upper: %s\n", s);
                break;
            case 4:
                for (i = 0; s[i]; i++) s[i] = tolower(s[i]);
                printf("Lower: %s\n", s);
                break;
            case 5:
                for (i = 0, j = strlen(s)-1; i < j; i++, j--)
                    { tmp = s[i]; s[i] = s[j]; s[j] = tmp; }
                printf("Reversed: %s\n", s);
                break;
            case 6:
                printf("Enter string to concat: "); fgets(t, 100, stdin);
                t[strcspn(t, "\n")] = 0;
                strcat(s, t);
                printf("Result: %s\n", s);
                break;
            case 7:
                printf("Enter string to compare: "); fgets(t, 100, stdin);
                t[strcspn(t, "\n")] = 0;
                i = strcmp(s, t);
                printf(i == 0 ? "Equal\n" : i < 0 ? "s1 < s2\n" : "s1 > s2\n");
                break;
            case 8:
                printf("Enter string to copy: "); fgets(t, 100, stdin);
                t[strcspn(t, "\n")] = 0;
                strcpy(s, t);
                printf("Copied: %s\n", s);
                break;
            case 9:
                count = 0;
                for (i = 0; s[i]; i++)
                    if (strchr("aeiouAEIOU", s[i])) count++;
                printf("Vowels = %d\n", count);
                break;
            case 10:
                strcpy(t, s);
                for (i = 0, j = strlen(t)-1; i < j; i++, j--)
                    { tmp = t[i]; t[i] = t[j]; t[j] = tmp; }
                printf(strcmp(s, t) == 0 ? "Palindrome\n" : "Not Palindrome\n");
                break;
            case 11: printf("Bye!\n"); break;
            default: printf("Invalid!\n");
        }
    } while (choice != 11);
    return 0;
}