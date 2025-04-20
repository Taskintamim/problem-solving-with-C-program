//Program to find the area of ​​a triangle (1/2 *base*base)
#include <stdio.h>
int main()
{
    float base, height, area;
    printf("Base: ");
    scanf("%f", &base);
    printf("Height: ");
    scanf("%f", &height);
    area = 0.5*base*height;
    printf("Area  %.f\n", area);
    return 0;
}
