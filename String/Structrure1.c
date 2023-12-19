#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100
#define LEN 50

struct Item
{
    int number;
    char name [LEN + 1];
    int on_hand;
};

void Insert (struct Item idb[], int i)
{
    printf ("Put part number: ");
    scanf ("%d", &idb[i].number);
    printf ("Put name: ");
    fflush (stdin);
    gets (idb[i].name);
    printf ("Put initial quantity: ");
    scanf ("%d", &idb[i].on_hand);
}

void Print (struct Item idb[], int i)
{
    printf ("PN \t Name \t Qty\n");
    printf ("===============================\n");
    for (int j = 0; j < i; j++)
    {
        printf ("%d \t %s \t %d\n", idb[j].number, idb[j].name, idb[j].on_hand);
    }
    printf ("===============================\n");
}

void Search (struct Item idb[], int i)
{
    printf ("Put the part number: ");
    int pn;
    scanf ("%d", &pn);
    for (int j = 0; j < i; j++)
    {
        if (pn == idb[j].number)
            printf ("%s %d\n", idb[j].name, idb[j].on_hand);
    }
}

void Update (struct Item idb[], int i)
{
    printf ("Put the part number: ");
    int pn;
    scanf ("%d", &pn);
    for (int j = 0; j < i; j++)
    {
        if (pn == idb[j].number)
        {
            printf ("Put new quantity: ");
            int nq;
            scanf ("%d", &nq);
            idb[j].on_hand = nq;
        }

    }
}

int ReadData (FILE *fr, struct Item idb[])
{
    int i = 0;
    while (!feof(fr))
    {
        fscanf (fr, "%d %s %d", &idb[i].number, idb[i].name, &idb[i].on_hand);
        i++;
    }
    return i;
}


void WriteData (FILE *fw, struct Item idb[], int i)
{

    for (int j = 0; j < i; j++)
    {
        fprintf (fw, "%d %s %d\n", idb[j].number, idb[j].name, idb[j].on_hand);
    }
}

int main (int argc, char *argv[])
{
    struct Item IDB [SIZE]; //IDB -> Item Databse
    int index = 0;

    /*FILE *fr;
    fr = fopen ("IDB.txt", "r");

    if (fr == NULL)
    {
        printf ("Unable to open file\n");
        return 0;
    }

    index = ReadData (fr, IDB);
    fclose (fr);*/

    char choice;

    while (1)
    {
        printf ("\n Put your choice: i - Insert\n"
                "                    p - Print\n"
                "                    s - Search\n"
                "                    u - update\n"
                "                    q - quit\n");
        fflush (stdin);
        scanf ("%c", &choice);

        switch (choice)
        {
        case 'i':
            Insert (IDB, index);
            index++;
            break;
        case 'p':
            Print (IDB, index);
            break;
        case 's':
            Search (IDB, index);
            break;
        case 'u':
            Update (IDB, index);
            break;
        case 'q':
            break;
        default:
            printf ("Wrong choice\n");

        }
        if (choice == 'q') break;
    }

    FILE *fw;
    fw = fopen ("IDB.txt", "w");

    if (fw == NULL)
    {
        printf ("Unable to open file\n");
        return;
    }
    WriteData (fw, IDB, index);
    fclose(fw);

    return 0;
}
