#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a numbe: ");
    scanf("%d",&n);
    int c=0;
    for (i=1; i<n; i++)
    {

    if (n%i==0)
            c++;
    }

    if (c<=1)

    {
        printf("%d is prime number.",n);
    }
    else printf("%d is not prime number.",n);


    return 0;
}
