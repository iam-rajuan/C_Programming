#include<stdio.h>
#include<conio.h>
int factorial(int r)
{
    int i,f=1;
    for(i=r;i>=1;i--)
    {
        f=f*i;
    }
    return f;
}
void main()
{
    int num1,num2,i,k,rem,strong;
    printf("Enter interval (two numbers): ");
    scanf("%d%d",&num1,&num2);
    printf("Strong numbers between %d and %d are:\n",num1,num2);
    for(i=num1;i<=num2;i++)
    {
        k=i;
        strong=0;
        while(k>0)
        {
            rem=k%10;
            strong=strong+factorial(rem);
            k=k/10;
        }
        if(i==strong)
            printf("%d\n",i);
    }
    return 0;
}

