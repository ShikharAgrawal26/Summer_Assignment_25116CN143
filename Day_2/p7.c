#include<stdio.h>
int main()
{
    int num,n,product=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        n=num%10;
        product=product*n;
        num=num/10;
    }
    printf("Product of digits: %d",product);
    return 0;
};