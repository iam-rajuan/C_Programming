#include <stdio.h>
#include <math.h>
int main()
{
    float x[100];
    int  i, n, j, temp, median;
    float variance, std_deviation,mean = 0;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter %d real numbers \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }
    for (i = 0; i < n; i++)
    {
        mean = mean + x[i];
        mean = mean / n;
    }

    for (i = 0; i < n; i++)
    {
        variance = variance + pow((x[i] - mean), 2);
    }
    variance = variance / (float)n;
    std_deviation = sqrt(variance);
    for (i = 0; i < n - 1; i++)
        for (j = i; j < n; j++)
        {
            if (x[i] > x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    if ((n + 1) % 2 == 0)
    {
        median = x[((n + 1) / 2) - 1];
    }
    else
    {
        median = (x[((n + 1) / 2) - 1] + x[((n + 2) / 2) - 1]) / 2;
    }
    printf("mean of all elements = %.2f\n", mean);
    printf("median of all elements = %.2f\n", median);
    printf("variance of all elements = %.2f\n", variance);
    printf("Standard deviation = %.2f\n", std_deviation);
}
