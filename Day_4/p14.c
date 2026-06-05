#include<stdio.h>
int main(){
    int n,a=0,b=1,c;
    printf("Enter the term: ");
    scanf("%d",&n);
    if(n==1)
    printf("The %d term of the Fibonacci Series is: 0",n);
    else if(n==2)
    printf("The %d term of the Fibonacci Series is: 1",n);
    else{
        for(int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        printf("The %d term of the Fibonacci Series is: %d",n,c);
    }
    return 0;
}