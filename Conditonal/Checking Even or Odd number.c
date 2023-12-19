#include <stdio.h>
int main()
{
    int num1, rem1;

    printf("Input an integer : ");
    scanf("%d", &num1);
    rem1 = num1 % 2;
    if (rem1 == 0)
        printf("%d is an even integer\n", num1);
    else
        printf("%d is an odd integer\n", num1);
}
