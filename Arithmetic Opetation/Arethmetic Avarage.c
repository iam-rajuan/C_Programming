#include<stdio.h>
int main()
{
int num1,num2,sum;
float avg;
printf("Enter two numbers: ");
scanf("%d %d",&num1,&num2);
sum=num1+num2;
printf("The sum of numbers is: %d\n",sum);
avg=(float)sum/2;
printf("The avarage is: %.2f\n",avg);

return 0;
}

