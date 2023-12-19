#include <stdio.h>

// Function to insert element
// at a specific position
void insertElement(int arr[], int n, int x, int pos)
{
    // shift elements to the right
    // which are on the right side of pos
    for (int i = n - 1; i >= pos; i--)
        arr[i + 1] = arr[i];

    arr[pos] = x;
}

// Driver's code
int main()
{
    int arr[15];
    int i,n;
    printf("insert array size: ");
    scanf("%d",&n );
    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }


    printf("Before insertion : ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    int x,pos;
    printf("inter value: ");
    scanf("%d",x );
printf("inter position: ");
    scanf("%d",pos );

    //int x = 10, pos = 2;

    // Function call
    insertElement(arr, n, x, pos);
    n++;

    printf("After insertion : ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
