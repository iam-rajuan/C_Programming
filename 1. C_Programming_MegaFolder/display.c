#include<stdio.h>
int main()
{

    for (int i=1; i<=5; i++)
    {
        printf("\n");
        for (int j=1; j<=i; j++ )
        printf("%5d",j);
    }

    return 0;
}

/*#include<stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("\n");
        for (int j = 1 ; j <= i; j ++)
            printf("%5d", j);
    }
    return 0;
}*/
