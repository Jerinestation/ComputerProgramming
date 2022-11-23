#include "stdio.h"
int main(){
	printf("Enter 3 Number : ");
	int num1,num2,num3;
	scanf("%d %d %d",&num1,&num2,&num3);
	int total = num1+num2+num3;
	printf("ANSWER = %d\n",total);
	if((int)((total/1000)%2)==0){
		printf("EVEN");
	}
	else{
		printf("ODD");
	}
	return 0;
}
