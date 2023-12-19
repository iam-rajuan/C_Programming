#include <stdio.h>
int main()
{
    int num, temp;
    long productOfDigit = 1;
    printf("Enter a Number\n");
    scanf("%d", &num);
    temp = num;
    while(num != 0)
    {
        productOfDigit *= num % 10;
        num = num/10;
    }
    printf("Product of digits of %d = %ld", temp, productOfDigit);
    return 0;
}

