#include <stdio.h>

int main()
{
    int num, temp, firstDigit, lastDigit;
    printf("Enter a Number\n");
    scanf("%d", &num);
    temp = num;
    lastDigit = num %10;
    while(num > 10)
    {
        num = num/10;
    }
    firstDigit = num;
    printf("Sum of first and last digit of %d = %d", temp, firstDigit+lastDigit);
    return 0;
}
