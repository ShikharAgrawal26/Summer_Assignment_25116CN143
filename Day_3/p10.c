#include<stdio.h>
#include<math.h>
int main()
{
    int start,end,i,j,isprime;
    printf("Enter the starting number: ");
    scanf("%d",&start);
    printf("Enter the ending number: ");
    scanf("%d",&end);
    printf("Prime numbers between %d and %d are: ",start,end);
    for(i=start;i<=end;i++)
    {
        isprime=1;
        if(i<=1)
        isprime=0;
        else
        {
            for(j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    isprime=0;
                    break;
                }
            }
        }
        if(isprime)
        printf("%d ",i);
    }
    return 0;
};