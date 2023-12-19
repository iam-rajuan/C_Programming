#include<stdio.h>

int num(int n2)
{
    int  n1=0,remainder,f=1;
    while(n2 != 0)
    {
        remainder = n2 % 2;
        n1 = n1 + remainder * f;
        f = f * 10;
        n2 = n2 / 2;
    }
    return n1;
}
int main()
{
    int n1;
    int n2;
    printf(" Input any decimal number : ");
    scanf("%d",&n2);
    n1 = num(n2);
    printf("\n The Binary value is : %ld\n\n",n1);

    return 0;
}

