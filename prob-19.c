// counting number of a digit in an integer
#include <Stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter any integer number : ");
    scanf("%d", &num);
    while(num != 0)
    {
        num = num/10;
        ++count;
    }
    printf("Total number of digits : %d\n", count);
    return 0;
}
