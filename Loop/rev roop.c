#include<stdio.h>
int main()
{
    int i;
    for (int i=1; i<=5; i++)
    {
        {
            printf("\n");
        }

        for (int j=1; j<=i; j++)
        {
            printf("%d", (5-i+1));

        }
    }
    return 0;
}

