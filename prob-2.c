/* Length and area of ​​the 3 sides of a triangle
area = A = √[s(s-a)(s-b)(s-c)], where 's' is the semi-perimeter of the triangle given by s = (a + b + c)/2.
*/
#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,s,area;
    printf("Enter 3 values: ");
    scanf("%lf %lf %lf", &a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle = %.2lf\n",area);
    return 0;
}
