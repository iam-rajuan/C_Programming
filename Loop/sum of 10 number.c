#include<stdio.h>
int main()
{
    int i,n,sum=0;

    for (int i=1; i<=10; i++)
    {
        scanf("%d",&n);
        sum += n;
    }
    printf("%d",sum);


    return 0;
}
