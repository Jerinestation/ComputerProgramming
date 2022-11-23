#include<stdio.h>
int main() {
int x ;

printf(" *** Show a number in variety formats. ***\n");
printf("Enter integer : ");
scanf("%d" ,&x);
printf("Int     -> %d\n",x);
printf("Float   -> %.2f\n" ,x*1.0);
printf("Int/3   -> %.3f\n" ,x/3.00);
printf("Int^2   -> %d\n" ,x*x);



  return 0;
}