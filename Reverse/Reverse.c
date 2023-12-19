#include<stdio.h>
int main()
{
int num,n1,n2,n3,r;
scanf("%d",&num);
n3=num%10;
num=num/10;
n2=num%10;
num=num/10;
n1=num%10;
printf("%d%d%d",n3,n2,n1);



return 0;
}
