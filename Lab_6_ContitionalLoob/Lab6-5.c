#include <stdio.h>
 int main()
 {
    char x[100]; int sum=0,i=0,b=0;
    printf(" *** Count number of brackets ***\n");
    printf("Enter expression : ");
    scanf("%[^\n]",&x);
    printf("expression : %s\n",x);
    while (x[i]!= '\0')
    {
        sum += 1;
    if(x[i]== 40 ||x[i]== 41)
    {
        b += 1;
    }
    i++;
    }
    printf("length : %d\n",sum);
    if (b > 0 && b%2==0){ if (b/2>1){
    printf("There are %d brackets in %s",b/2,x);
    }
    else
    {
    printf("There is %d bracket in %s",b/2,x);
    }
        }
    else if (b%2==1)
    {
    printf("%s ===> bracket doesn't match.",x);
    }
    else
    {
    printf("There is NO bracket in %s",x);
    }
    return 0;
 }