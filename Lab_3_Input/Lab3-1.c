#include <stdio.h>
int main()
{

    char str1[] = "Computer Programming is fun.";

    char str2[] = "Programming";

    printf("%-8.7s%72s%1870s%.20s", str2, str2, "", str1);

    return 0;
}