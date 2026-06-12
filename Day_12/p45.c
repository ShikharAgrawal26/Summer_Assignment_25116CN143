#include<stdio.h>
void palindrome(int n){
    int temp, rev=0, digit;
    temp = n;
    while(temp != 0)
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    if(rev == n)
        printf("%d is a palindrome number.", n);
    else
        printf("%d is not a palindrome number.", n);
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("%d",palindrome(a));
    return 0;
}