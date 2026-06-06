#include<stdio.h>
#include<math.h>
int main()
{
    int decimmal=0, rem;
    long long binary;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    for (int i = 0; binary > 0; i++) {
        rem = binary % 10;
        decimmal += rem * pow(2, i);
        binary /= 10;
    }
    printf("Decimal representation: %d\n", decimmal);
    return 0;
};