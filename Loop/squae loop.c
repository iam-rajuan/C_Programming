#include<stdio.h>
int main()
{
int n,i;
printf("Enter the value: ");
scanf("%d",&n);
printf("i\t sqrt i\n");
printf("--------------\n");



for (i=1; i<=n;i++)
{
    printf("%d\t %d\n",i,i*i);

}



return 0;
}
