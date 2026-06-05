#include<stdio.h>
#include<math.h>
int main()
{
    int n, temp, digit, sum=0, count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp != 0)
    {
        digit = temp % 10;
        sum += pow(digit, 3);
        temp /= 10;
        count++;
    }
    if(sum == n)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);
    return 0;
};