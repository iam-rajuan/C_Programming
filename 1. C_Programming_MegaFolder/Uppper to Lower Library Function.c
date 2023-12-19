#include<stdio.h>
int main()
{
    char upper,lower;
    printf("Enter the uppercase letter:");
    scanf("%c",&upper);
    lower=tolower(upper);
    printf("The lowercase letter is %c",lower);


    return 0;
}
