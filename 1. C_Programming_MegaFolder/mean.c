#include<stdio.h>
#include<math.h>

float mean1(float[],int);
float median1(float[],int);
float mode1(float[],int);
double standarddeviation1(float[],int);

int main()
{
int i,n,choice;
float array[100],mean,median,mode;
double standarddeviation;

printf("Enter No of Elements\n");
   scanf("%d",&n);
printf("Enter Elements\n");

for(i=0;i<=n-1;i++)
    scanf("%f",&array[i]);
do
{
    printf("\n\tEnter Choice\n\t1.Mean\n\t2.Median\n\t3.Mode\n\t4.Standard deviation\n\t5.Exit\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: mean=mean1(array,n);
            printf("\n\tMean = %f\n",mean);
            break;
        case 2: median=median1(array,n);
            printf("\n\tMedian = \n",median);
            break;
        case 3: mode=mode1(array,n);
            printf("\n\tMode = %f\n",mode);
            break;
        case 4: standarddeviation=standarddeviation1(array,n);
            printf("\n\tStandard deviation = %f\n",standarddeviation);
            break;
        case 5: break;
        default:printf("Wrong Option");
            break;
    }

}while(choice!=5);
  getchar();

return 0;
}

float mean1(float array[],int n) {
    int i;
    float sum=0;
    for(i=0;i<=n;i++)
    sum=sum+array[i];
return (sum/n);
}
float median1(float array[],int n) {
float temp;
int i,j;
for(i=n-1;i>=0;i--)
    for(j=0;j<=i;j++)
        if(array[j]>=array[j+1])
        {
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }

if(n%2==0)
    return (array[n/2]+array[n/2-1])/2;
else
    return array[n/2];
}
float mode1(float array[],int n) {
return (3*median1(array,n)-2*mean1(array,n));
}
double standarddeviation1(float array[],int n) {
int j;
double max[100],sum,variance,mean;
mean=mean1(array,n);
sum=0;
for(j=0;j<=n;j++)
{
    max[j]=pow((array[j]-mean),2);
    sum+=max[j];
}
variance=sum/(j-1);
return sqrt(variance);
}
