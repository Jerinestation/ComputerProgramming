#include <stdio.h>
int main(){
int num1, num2, i=1, sum=0;
    printf(" *** Summation of common factor ***\n");
    printf("Enter two positive numbers : ");
    scanf("%d %d",&num1,&num2);
    for(int i=1;((i<=num1) && (i<=num2)); i++)
    {
        if((num1%i == 0)&&(num2%i == 0))
        {
            sum+=i;
        }
    }
    printf("Summation of common factors (%d and %d) ==> %d", num1, num2 , sum);
    return 0;


return 0;

}
