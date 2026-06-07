#include<stdio.h>
int fabonacci(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else{
        int a=0, b=1, c;
        for(int i=2; i<=n; i++){
            c=a+b;
            a=b;
            b=c;
        }
        return b;
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Fabonacci of %d is\n: ",n);
    for(int i=0; i<n; i++){
        printf("%d ", fabonacci(i));
    }
    return 0;
};