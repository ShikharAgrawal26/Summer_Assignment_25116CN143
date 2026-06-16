#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
    int unique[n], count=0, isUnique;
    for (int i = 0; i < n; i++) {
        isUnique = 1;
        for (int j = 0; j < count; j++) {
            if (arr[i] == unique[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            unique[count++] = arr[i];
        }
    }
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", unique[i]);
    }
    return 0;
}