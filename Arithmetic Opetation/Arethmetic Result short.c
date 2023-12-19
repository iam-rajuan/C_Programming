#include<stdio.h>
int main()
{
    float num1,num2,result1,result2,result3,result4;
    printf("Enter first number:");
    scanf("%f",&num1);
    printf("Enter first number:");
    scanf("%f",&num2);


    result1=num1+num2;
    result2=num1-num2;
    result3=num1*num2;
    result4=num1/num2;
    printf(" the addition number is: %.2f\n The substraction number is %.2f\n The multiple number is %.2f\n The division number is %.2f\n",result1,result2,result3,result4);



    return 0;
}

