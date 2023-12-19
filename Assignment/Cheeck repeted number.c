#include <stdio.h>

int main()
{
    int n, i, j, count = 1, p = 0;
    printf("Enter the length of array");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
        if (count != 1)
        {
            p = p + count;
            count = 1;
        }
    }
    printf("Number of repetitions are %d", p);
}
