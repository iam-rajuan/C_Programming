#include <stdio.h>

int main()
{
    float bangla, eng, phy, chem, math, comp;
    float total, average, percentage;

    printf("Enter marks of Bangla: ");
    scanf("%f", &bangla);

    printf("Enter marks of English: ");
    scanf("%f", &eng);

    printf("Enter marks of Physics: ");
    scanf("%f", &phy);

    printf("Enter marks of Chemistry: ");
    scanf("%f", &chem);

    printf("Enter marks of five Mathematics: ");
    scanf("%f", &math);


    total = bangla + eng + phy + chem + math;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);
    printf("Percentage = %.2f", percentage);

    return 0;
}
