//Check Prime number
#include <stdio.h>
int main()
{
    int num, count = 0, i;
    printf("Enter any number :");
    scanf("%d", &num);
    if(num  <= 1)
    {
        printf("Not a prime number\n");
        return 0;
    }
    for(i=2; i<num; i++)
    {
        if(num%i == 0)
        {
            count++;
            break;
        }
    }
    if(count == 0)
        printf("Prime number\n");
    else
        printf("Not a prime number\n");
    return 0;
}
