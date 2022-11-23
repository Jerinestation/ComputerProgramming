#include <stdio.h>
int main()
{
    int n, i;
    printf(" *** Multiplication Table ***\n");
    printf("Enter a number (2-100) : ");
    scanf("%d", &n);
    if (n > 1 && n <= 100)
    {
        for (i = 1; i <= 9; i++)
        {
            printf("%4d x %d  = %d\n", n, i, n * i);
        }
        for (i = 10; i <= 12; i++)
        {
            printf("%4d x %d = %d\n", n, i, n * i);
        }
    }
    else
    {
        printf(" - - -  Out of Range  - - -");
    }
    return 0;
}