void mainmenu(char user[20],char pw[20]){
    char choice;
    check=0;
    retry:
    system("cls");
    printf("\n\t\t WELCOME, %s.\n",user);

    printf("\n\t\t|\t CHOOSE WHAT TO DO\t\t\t |");
    printf("\n\t\t|\t _______________________________\t |");

    printf("\n\t\t|\t| 1. Book new tickets\t\t|\t |");
    printf("\n\t\t|\t| 2. Cancel booked trips\t|\t |");
    printf("\n\t\t|\t| 3. Check upcoming travels\t|\t |");
    printf("\n\t\t|\t| 4. Check waitlist\t\t|\t |");
    printf("\n\t\t|\t| 5. Logout\t\t        |\t |");
Function to create a sign up.
void signup(){
    char user[20],pw[20],c;
    char dir[100]="./railway dbs/";
    int len,ch,i;
    FILE *fptr;
    redouser:
    strcpy(dir,"./railway dbs/");
    ch=0;
    system("cls");
    printf("\n\t\t __________________________");
    printf("\n\t\t|\t\t\t   |");
    printf("\n\t\t|\t SIGN UP\t   |");
    printf("\n\t\t|__________________________|");
    printf("\n\n\t\tNOTE : Username should consist of 6-16 characters\n\t\t [Only numbers and alphabets without space]");
    printf("\n\n\t\tUSERNAME : ");
    scanf("\n");
    scanf("%[^\n]%*c",user);
    len=strlen(user);
    if(len>16 || len<6)
    {
        printf("\n\t\tWARNING : Username does not follow conditions. Retry.");
The function to start up main window
void startup(){
    char choice;
    system("cls");
    system("color 1F");

    printf("\n\t\t\t   WELCOME TO MANILA TRAIN RAILWAY SERVICE\n\n");

    printf("\n\n\t\tPress any to continue...... "); getch();
    redo:
    system("cls");

    printf("\n\t\t\t CHOOSE YOUR OPTION\t\t\t ");


    printf("\n\t\t\t 1. Login to Existing Account\t\t");
    printf("\n\t\t\t 2. Create New Account\t\t");
    printf("\n\t\t\t3. Exit\t\t ");

    choice=getch();
    if(choice!='1'&&choice!='2'&&choice!='3')
    {
        printf("\n\t\tWarning : INVALID INPUT. TRY AGAIN\n");
        delay(1);
        goto redo;
    }
    else
    {
        if(choice=='1')
            login();
        else if(choice=='2')
            signup();
        else if(choice=='3')
            shutdown();
    }
}
Function to search new booking
int* search(char user[20],char pw[20],int c){
    int choice,origin,dest,n_trains,i,*lst,*index=malloc(3*sizeof(int));
    char option,ch;
    if(c==0){
        redo_origin :
        system("cls");

        printf("\n\t\t\t NEW BOOKING\t");

        printf("\n\n\t\t NOTE : Choose Where you wish to travel from.\n");
        display_stations();
        printf("\n\t\t CHOICE : ");
        scanf("%d",&choice);
        if(choice<=0 || choice>34){
            printf("\n\t\t WARNING : INVALID OPTION. RETRY.");
            delay(1);
            goto redo_origin;
        }
Function to check up coming travels.
void check_upcoming(char user[20],char pw[20]){
    FILE *in;
    char dir[100]="./railway dbs/",ps[20];
    struct passenger p;
    int i=0;
    strcat(dir,user);strcat(dir,".txt");
    in = fopen(dir,"r");
    system("cls");

    printf("\n\t\t|   UPCOMING TRAVELS\t   |");

    fscanf(in,"%s ",&ps);
The function to check waiting list.
void check_waitlist(char user[20],char pw[20]){
    FILE *in;
    char dir[100]="./railway dbs/",ps[20];
    struct passenger p;
    int i=0;
    strcat(dir,user);strcat(dir,".txt");
    in = fopen(dir,"r");
    system("cls");

    printf("\n\t\t|\tWAITING LIST\t   |");

    fscanf(in,"%s ",&ps);
Function to cancel booking.
void cancelbooking(char user[20],char pw[20]){
    FILE *in,*out;
    char dir[100]="./railway dbs/",ps[20],c,dir2[100];
    struct passenger p,r;
    struct waitlist *t,*s;
    int i=0,n,index;
    strcat(dir,user);strcat(dir,".txt");
    redoview:
    i=0;
    in = fopen(dir,"r");
    system("cls");

    printf("\n\t\t|\tCANCEL BOOKING\t   |");

    fscanf(in,"%s",&ps);
