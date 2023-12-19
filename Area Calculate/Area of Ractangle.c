#include<stdio.h>
int main()
{
    float width, height, Area;

    printf ("Enter the Width of the rectangle:");
    scanf ("%f",&width);
    printf ("Enter the Height of the rectangle:");
    scanf ("%f",&height);

    Area = width * height;

    printf("Area of rectangle is: %.2f", Area);


    return 0;
}
