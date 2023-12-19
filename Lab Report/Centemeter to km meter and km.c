
#include <stdio.h>
int main()
{
    float centimeter, meter, kilometer;
    printf("enter length in cm:\n ");
    scanf("%f", &centimeter);
    meter = centimeter / 100.0;
    kilometer = centimeter / 100000.0;
    printf("length in mtrs = %.4f\n", meter);
    printf("length in km = %.4f", kilometer);
    return 0;
}
