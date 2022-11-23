#include <stdio.h>
int main()
{
    int i=0,x;
    printf("Input number: ");
    scanf("%d",&x);
    while (i<x)
    {
        printf("Loop: %d\n" ,i);
        x++;
    }
    return 0;
}