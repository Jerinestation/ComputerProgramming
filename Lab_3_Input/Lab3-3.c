#include <stdio.h>

int main() {
float x;
printf(" *** Convert Fahrenheit to Celcius ***\n");
printf("Enter temperature in degree Fahrenheit : ");
scanf("%f",&x);
printf("%.5f degree Fahrenheit equals %.5f degree celcius.\n",x,(x-32)/1.8);



    return 0;
}