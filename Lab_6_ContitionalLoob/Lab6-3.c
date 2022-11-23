#include<stdio.h>
int main()
{
    int num1=999999,num2=-999999,n,x,prime=0,i=0;
    printf(" *** Show prime number ***");
    printf("\nEnter 2 positive numbers : ");
   for(n=1;n<=2;n++){
    printf("");
    scanf("%d",&x);

      if(x>num2)
        {
            num2=x;
                   }

        if(x<num1)
        {
            num1=x;
        }
                   }
    printf("\nprime number(s) from %d to %d :",num1,num2);

      for(num1;num1<=num2;num1++){
       if( num1 == 0 || num1 == 1 )
        prime = 1;

       for( int i=2; i<=(num1/2); i++ ) {
       if( num1 % i == 0 ) {
		prime = 1;
      	break;
    }
    }
    if( prime == 0 ){
    printf(" %d",num1);
     i++;}
    prime=0;


}
    printf("\ntotal prime numbers : %d",i);
}
