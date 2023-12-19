#include<stdio.h>
int main()
{
int n,a,i,sq;
printf("Enter the number: ");
scanf("%d",&n);
for (i=1; i<=n; i++){
printf("enter the number ");
scanf("%d",&a);

if (a<0)
    continue;
sq = n *n;
printf("The squae is %d", sq);
}
return 0;
}

