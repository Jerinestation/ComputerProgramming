#include<stdio.h>
#define PI 3.1416
void Cal_Circle(int);
int main()
{
  	int rad1;
  	printf("Input Radius of Circle (mm) : ");
   	scanf("%d",&rad1);
	Cal_Circle(rad1);
	return 0;
}
void Cal_Circle(int rad1)
{   float rad = rad1*1.0;
    printf("Diameter = %d mm\n",rad1*2);
    printf("Circumference = %.2f mm\n",PI*2*rad);
    printf("Aera = %.2f mm2",PI*rad*rad);
}
