
#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;
    printf ("Enter the height: ");
    scanf("%d",&height);
    printf ("Enter the length: ");
    scanf("%d",&length);
    printf ("Enter the width: ");
    scanf("%d",&width);

    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
