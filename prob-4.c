//Area of ​​a circle
#include <stdio.h>
#include <math.h>
int main()
{
    float radius, area;
    printf("Enter Radius : ");
    scanf("%f", &radius);
    area = M_PI*radius*radius;
    printf("Area of circle = %.2f\n", area);
    return 0;
}
