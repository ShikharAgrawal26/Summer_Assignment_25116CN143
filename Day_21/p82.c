#include<stdio.h>
int main()
{
    char str[100];
    int length = 0;
    char rev[100];
    printf("Enter a string: ");
    scanf("%s", str);
    while (str[length] != '\0') {
        length++;
    }
    for (int i = 0; i < length; i++) {
        rev[i] = str[length - 1 - i];
    }
    rev[length] = '\0';
    printf("Reversed string: %s\n", rev);
    return 0;
}