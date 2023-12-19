#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for (int i=1; i<=n; i++)
    {
        sum += pow((i),3);

    }

    for (int i=1; i<=n; i++)
    {
        if (i!=n)
            printf("%d^2 + ", i);
        else
            printf("%d^2 = %d",i,sum);

    }
    return 0;
}
