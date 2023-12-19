#include<stdio.h>

struct login
{

    char fname[100];
    char lname[20];
    char username[20];
    char password[20];
};
void registration()
{
    FILE*log;
    log=fopen("login12.txt","w");
    struct login l;
    printf("Enter first name:");
    scanf("%s",&l.fname);
    printf("Enter last name:");
    scanf("%s",&l.lname);
    printf("Enter username:");
    scanf("%s",&l.username);
    printf("Enter password:");
    scanf("%s",&l.password);
    fwrite(&l,sizeof(l),1,log);
    fclose(log);

    printf("\n\nyour user name is userID\n");
    printf("Now login with UserID and password\n");
    printf("\nPress any key to continue....");
    getch();
    system("CLS");
    login();


}

void login()
{
    char username[200],password[20];
    FILE*log;
    log=fopen("login12.txt","r");
    struct login l;
    printf("UserID:");
    scanf("%s",&username);
    printf("Password:");
    scanf("%s",&password);
    while(fread(&l,sizeof(l),1,log))
    {
        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)
        {
            printf("succesful login\n");
        }
        else
        {
            printf("Please Enter correct userID and password");
        }
    }
    fclose(log);
}
main()
{
    int cho;
    printf("Press '1' for register\n press '2' for login\n");
    scanf("%d",&cho);

    /*if(cho==1)
    {

        system("CLS");
        registration();

    }
    else if(cho==2)
    {
        system("CLS");
        login();
    }*/

 switch (cho)
        {
        case 1:
            registration();
            break;
        case 2:
            login();
            break;
        case 3:
            printf("Thankyou for Choosing our small Cinema !! \n");
            getch();
            exit(1);
        default :
            system("CLS");
            printf("Enter a valid number !!\n");
            main();
        }

        getch();

}
