// switch|| calculator
#include <stdio.h>
int main()
{
    double num1, num2;
    char op;
    printf("Enter an operator(+,-,*,/) :");
    scanf("%c", &op);
    printf("Enter 1st number : ");
    scanf("%lf", &num1);
    printf("Enter 2nd number : ");
    scanf("%lf", &num2);
    switch(op)
    {
    case '+':
    {
        printf("%.2lf +%.2lf = %.2lf\n", num1, num2, num1+num2);
        break;
    }
    case '-':
    {
        printf("%.2lf -%.2lf = %.2lf\n", num1, num2, num1-num2);
        break;
    }
    case '*':
    {
        printf("%.2lf *%.2lf = %.2lf\n", num1, num2, num1*num2);
        break;
    }
    case '/':
    {
        printf("%.2lf /%.2lf = %.2lf\n", num1, num2, num1/num2);
        break;
    }
    default :
        printf("Not a valid operator\n");
    }
    return 0;
}
