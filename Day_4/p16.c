#include<stdio.h>
#include<math.h>
int main()
{
    int start, end, temp, digit, sum, count;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("Armstrong numbers between %d and %d are: ", start, end);
    for(int i = start; i <= end; i++)
    {
        temp = i;
        sum = 0;
        count = 0;
        while(temp != 0)
        {
            digit = temp % 10;
            sum += pow(digit, 3);
            temp /= 10;
            count++;
        }
        if(sum == i)
            printf("%d ", i);
    }
    return 0;
};