#include<stdio.h>
#include<math.h>
int arm(int n){
    int temp, digit,sum=0,count=0;
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
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("%d",arm(a));
    return 0;
}