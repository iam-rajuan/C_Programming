#include<stdio.h>
int main()
{
  float radius, area, cf;
    printf("Enter Radius of Circle\n");
    scanf("%f",&radius);

    area=3.1416*radius*radius;
    printf("The area of Circle is %.3f\n",area);

    cf=2*3.1416*radius;
    printf("The Circumference of Circle is %.3f",cf);
}

