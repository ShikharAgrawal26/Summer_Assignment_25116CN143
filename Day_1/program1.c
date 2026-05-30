#include<stdio.h>
int main()
{
     //printf("Hello, World!");
    int n;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    sum+=i;
    printf("The sum of first %d natural ṇumbers is: %d", n, sum);
    return 0;


};