#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers: \n");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("%d is the largest.\n",a);
    }
    if (b>a && b>c)
    {
        printf("%d is the largest.\n",b);
    }
    if (c>b && c>a)
    {
        printf("%d is the largest.\n",c);
    }
    if (a==b && a==c)
    {
        printf("All are equal.");
    }

    return 0;
}
