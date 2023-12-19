#include <stdio.h>

int studentNumber=0;

struct students
{
    int id;
    char name[20];
};

struct students s[41];

void addStudent()
{
    int id;

    printf("\nEnter the Information of a Student.");

    printf("\nEnter the ID: ", &id);
    scanf("%d", &id);
    s[id].id = id;

    printf("Enter the Name: ");
    getchar();
    gets(s[id].name);
}

void displayStudent()
{
    int i,id;
    printf("Enter the id: ");
    scanf("%d", &id);
    for(i=0; i<41; i++)
    {

        if(s[i].id == id)
        {
            printf("\nInfo of %dth student: ", i);
            printf("\nID: %d", s[i].id);
            printf("\nName: ");
            puts(s[i].name);
        }
    }

    printf("\n");
}

void updateStudent()
{
    int id;
    printf("\nEnter the ID of a Student whose Name You Want to Update: ");
    scanf("%d", &id);

    printf("\nEnter the New Name: ");
    fflush(stdin);
    gets(s[id].name);
}

int main()
{
    printf("\t\t1. Add Student");
    printf("\n\t\t2. Update Student");
    printf("\n\t\t3. Display Student");
    printf("\n\t\t4. Exit");

    printf("\nEnter Your Choice: ");

    int choice;
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        addStudent();
        main();
    case 2:
        updateStudent();
        main();
    case 3:
        displayStudent();
        main();
    default:
        exit(0);
    }

    addStudent();
    updateStudent();
    displayStudent();

    return 0;
}
