#include<stdio.h>
int main()
{
    char str1[100], str2[100];
    char *p1,*p2;
    printf("Enter the value ");
    gets(str1);
    p1=str1+strlen(str1)-1;
    p2=str2;
    while (p1>=str1)
    {
        *p2=*p1;
        p2++;
        p1--;
    }
    *p2='\0';
    printf("%s",str2);

    return 0;
}

