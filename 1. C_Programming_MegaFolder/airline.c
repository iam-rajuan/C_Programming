#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	int c,p;
	int i;
	int j;
	int s[10]={};
	printf("\n\n   ---------------------------------------------------\xcd\n");
	printf("    Welcome to Airline Seat Reservations System ");
	printf("\n   ---------------------------------------------------------\xcd\n\n");
	for (j=0; j<10; j++)
	{
	    printf("   -----------------------------------------------------\xcd\n");
		printf("   Class\n\n   [1] Business Class\n   [2] Economic class\n\n");
		printf("  ----------------------------------------------------------------\xcd\n");
		printf("   Choose: ");
		scanf("%i",&c);

		switch(c)
		{
		case 1:
		    printf("   \xcd\n");
			printf("   Business class\n\n");
			printf("   Seats available\n     |1|2|3|4|5|\n\n");
			printf("   \xcd\n");
			do
			{
                printf("   Pick a seat: ");
                scanf("%i",&p);
                s[j]=p;

			    for (i=0; i<j; i++)
			    {
                    if (s[j]==s[i])
                    {
                        printf("\n\n   Seat taken.\n\n");
                        break;
                    }
			    }
            }
            while (i!=j);
                if(s[j] <= 5)
                {
                    printf("   -------------------------------------\xcd\n");
                    printf("\n");
                    printf("   Class: Business class\n");
                    printf("   Seat no : %i\n",s[j]);
                    printf("\n");
                }
                else
                printf("\nWrong number!  No seat for you!\n\n");
            break;
		case 2:
			printf("   \xcd\n");
			printf("   Economical class\n\n");
			printf("   Seats available\n    |6|7|8|9|10|\n\n");
			printf("  \xcd\n");
			do
			{
                printf("   Pick a seat: ");
                scanf("%i",&p);
                s[j]=p;

			    for (i=0; i<j; i++)
			    {
                    if (s[j]==s[i])
                    {
                        printf("\n\n   Seat taken.\n\n");
                        break;
                    }
			    }
            }
            while (i!=j);
                if(s[j] >= 6)
                {
                    printf("   xcd\n");
                    printf("\n");
                    printf("   Class: Economical class\n");
                    printf("   Seat no : %i\n",s[j]);
                    printf("\n");
                }
                else
                printf("\nWrong number!  No seat for you!\n\n");
            break;
        default:
                break;
        }
    }
	return 0;
}


