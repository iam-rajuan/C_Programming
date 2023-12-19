#include<stdio.h>
int main()
{
float celsius, fahrenheit;
float FREEZING_PT=32.0;
float SCALER_FACTOR=(5.0/9.0);
printf("Enter the value of fahrenheit: ");
scanf("%f",&fahrenheit);
celsius = ((fahrenheit-FREEZING_PT)*SCALER_FACTOR);
printf("The Celsius is: %f",celsius);

return 0;
}

