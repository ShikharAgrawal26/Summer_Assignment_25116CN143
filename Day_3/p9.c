#include<stdio.h>
#include<math.h>
int main()
{
    int num,i,isprime=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num<=1)
    isprime=0;
    else
    {
        for(i=2;i<=sqrt(num);i++)
        {
            if(num%i==0)
            {
                isprime=0;
                break;
            }
        }
    }
    if(isprime)
    printf("%d is a prime number.",num);
    else
    printf("%d is not a prime number.",num);
    return 0;
};