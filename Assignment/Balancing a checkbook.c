#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float bal, creditDebit, newBalance ;

    printf("This is your checkbook balancing utility.\n");

    printf("You will enter your current balance followed by\n");

    printf("checkbook entries. Use + and - to indicate deposits\n");

    printf("and withdrawals. Signal the end of processing by\n");

    printf("entering a '0'\n");

    printf(">>>Please enter your initial balance: ");

    scanf("%f", &newBalance);

       while(creditDebit != 0) {


        printf("\n");
        printf("Enter deposit (+) or Withdrawl (-): ");
        scanf("%f", &creditDebit);

        bal += creditDebit;

        if (bal < 0) {
            printf("***I am sorry, you have bounced this check. $10 will be "
                "deducted\n");
            bal -= 10;
        }
        printf("Current balance: %.2f\n", bal);
    }



    system("pause");
    exit(0);
}
