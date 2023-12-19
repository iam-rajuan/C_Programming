#include<stdio.h>
int main()
{
int num,rem;
printf("Enter two digit number:");
scanf("%d",&num);
rem=num%10;
num=num/10;
printf("%d%d",rem,num);
return 0;
}

