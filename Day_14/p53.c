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
    int key;
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    int found=0, index=-1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            index = i;
            break;
        }
    }
    if(found==1)
    printf("Element %d found at index: %d",key,index);
    else
    printf("Element not found");
    return 0;
}