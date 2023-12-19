#include<stdio.h>
#include<stdlib.h>

// function declarations
void display(float n1, float n2, char ch, float result);
void add(float n1, float n2);
void subtract(float n1, float n2);
void multiply(float n1, float n2);
void divide(float n1, float n2);
void rem(float n1, float n2);
void power(float n1, float n2);

// main function
int main()
{
  float n1, n2;
  int ch;

  do{
    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);

    printf("\n*****************");
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Remainder");
    printf("\n6.Power (x^y)");
    printf("\n7.Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);

    switch (ch) {
      case 1:
        add(n1,n2);
        break;
      case 2:
        subtract(n1,n2);
        break;
      case 3:
        multiply(n1,n2);
        break;
      case 4:
        divide(n1,n2);
        break;
      case 5:
        rem(n1,n2);
        break;
      case 6:
        power(n1,n2);
        break;
      case 7:
        printf("Thank You.");
        exit(0);
      default:
        printf("Invalid input.");
        printf("Please enter correct input.");
    }

    printf("\n**********************************\n");
  }while(1);

  return 0;
}

// function for displaying the result
void display(float n1, float n2, char ch, float result)
{
  printf("%.2f %c %.2f = %.2f\n", n1, ch, n2, result);
}

// function for addition of two numbers
void add(float n1, float n2)
{
  float result = n1 + n2;
  display(n1, n2, '+', result);
}

// function for subtraction of two numbers
void subtract(float n1, float n2)
{
  float result = n1 - n2;
  display(n1, n2, '-', result);
}

// function for multiplication of two numbers
void multiply(float n1, float n2)
{
  float result = n1 * n2;
  display(n1, n2, '*', result);
}

// function for division of two numbers
void divide(float n1, float n2)
{
  float result = n1 / n2;
  display(n1, n2, '/', result);
}

// function for calculating remainder
void rem(float n1, float n2)
{
  //Modulus operator only works on int data type
  //Floating numbers are converted to int number
  int num1 = n1;
  int num2 = n2;
  int result = num1%num2;
  printf("%d %% %d = %d\n", num1, num2, result);
}

// function for calculating power
void power(float n1, float n2)
{
  if(n2<0) printf("Second number should be +ve.");
  else
  {
    float result=1.0;
    for(int i=1; i<=n2; i++)
    {
       result *= n1;
    }
    display(n1, n2, '^', result);
  }
}
