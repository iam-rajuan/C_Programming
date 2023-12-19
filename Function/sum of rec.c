#include <stdio.h>
int sumOfDigits(int num);

int sumOfDigits(int num)
{
    if(num == 0)
        return 0;

    return ((num % 10) + sumOfDigits(num / 10));
}

int main()
{
    int num, sum;

    printf("Enter any number to find sum of digits: ");
    scanf("%d", &num);

    sum = sumOfDigits(num);

    printf("Sum of digits of %d = %d", num, sum);

    return 0;
}
