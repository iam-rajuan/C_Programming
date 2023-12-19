#include<stdio.h>

int main()
{
int count,n, sum;
printf("enter the value of n: ");
scanf("%d", &n);
printf("%d Natural number are:\n",n);


sum=1;
for(count=1; count <= n; ++count)



     sum = sum*count;


  printf("%d\n", sum);

return 0;
}

