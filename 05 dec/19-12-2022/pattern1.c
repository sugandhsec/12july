#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }
        for (int m = 0; m < i; m++)
        {
            printf("%d",m%2);
        }

        printf("\n");
    }

    return 0;
}