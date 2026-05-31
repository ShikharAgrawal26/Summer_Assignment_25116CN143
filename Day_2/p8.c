#include<stdio.h>
int main()
{
    int n,reverse=0,rem,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        reverse=reverse*10+rem;
        temp=temp/10;
    }
    if(n==reverse)
        printf("The number is a palindrome.");
    else
        printf("The number is not a palindrome.");
    return 0;

}