#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++){
        printf("Element [%d]: ", i);
        scanf("%d",&arr[i]);
    }
    int duplicate=0;
    printf("Duplicate elements in the array are: ");
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                printf("%d ", arr[i]);
                duplicate++;
                break;
            }
        }
    }
    if(duplicate==0)
    printf("No duplicate elements found.");
    else
    printf("\nDuplicate elements found: %d", duplicate);
    return 0;
}