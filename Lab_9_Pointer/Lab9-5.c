#include<stdio.h>
void add_topping(char chanom[],char top[]);
int main()
{
    char chanom[50] = "Chanom";
    char top1[10], top2[10];
    printf("Enter 2 topping : ");
    scanf("%s %s", &top1, &top2);
    add_topping(chanom, top1);
    add_topping(chanom, top2);
    printf("Your order\t: %s", chanom);
}
void add_topping(char chanom[],char top[])
{   char plus[] = " + ";
    chanom=strcat(chanom,plus);
    chanom=strcat(chanom,top);
}
