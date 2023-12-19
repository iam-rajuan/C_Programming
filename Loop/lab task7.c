#include<stdio.h>
int main()
{
int n,rev,i,rem;
printf("Enter a number: ");
scanf("%d",&n);
rev=0;
for (i=1; n!=0; i++)
{
    rem = n%10;
    rev= (rev*10)+rem;
    n=n/10;
}
printf("Reverse number: %d ", rev);
return 0;
}
