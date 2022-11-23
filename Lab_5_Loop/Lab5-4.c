#include <stdio.h>
int main(){
	int i;
	int x=2;
     printf("Enter number : ");
     scanf("%d",&i);
     
     if(i>1){
        if((i==1 || i%2 == 0 || i%3 == 0 || i%5==0 || i%7==0) 
            && (i!=2 && i!=3 && i!=5 && i!=7)){
        while(i != 1){
        while(i % x == 0){
            printf("%d ",x);
            i = i / x;
        }
        x++;
    }     
    }
    	else {
    	printf("%d",i);
	}}
	else {
		printf(":(");
	}


    return 0;
}
