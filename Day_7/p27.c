#include<stdio.h>
int sum_of_digits(int n)
{
    int sum=0;
    if(n==0)
        return 0;
    else{}
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits of %d is %d\n", n, sum_of_digits(n));
    return 0;
    
}