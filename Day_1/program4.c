#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==0)
    printf("The number of digits in the number is: 1");
    else
    {
        int count=0;
        while(n!=0)
        {
            n/=10;
            count++;
        }
        printf("The number of digits in the number is: %d", count);
    }
    return 0;
}