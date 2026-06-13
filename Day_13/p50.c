#include<stdio.h>
int main()
{
    int n, sum=0;
    float avg;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    avg = (float)sum/n;
    printf("Sum of the array elements is: %d\n", sum);
    printf("Average of the array elements is: %.2f\n", avg);
    return 0;
}