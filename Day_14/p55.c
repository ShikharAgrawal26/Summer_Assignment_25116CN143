#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    int largest= arr[0], secondlargest=arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] > secondlargest && arr[i] < largest)
            secondlargest = arr[i];
    }
    printf("Second largest element in the array is: %d\n", secondlargest);
    return 0;
}