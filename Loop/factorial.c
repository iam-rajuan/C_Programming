#include<stdio.h>
#include<math.h>
int main()
{
    int n, sum = 0;
    printf("Enter n value: ");
    scanf("%d",&n);

    for(int i = 1; i <=  n; i++)
    {
        sum = sum + pow (i,2);
    }



    for ( int i=1; i<=n; i++)
    {
        if (i!= n)
            printf("%d^2 + ", i);
        else  printf("%d^2 = %d ", i, sum);
    }

    getch();
}


