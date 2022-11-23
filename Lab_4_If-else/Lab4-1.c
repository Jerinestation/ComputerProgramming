#include "stdio.h"
int main(){
	int num;
	printf("Enter Number : ");
	scanf("%d",&num);
	if(num>=8){
		printf("%d >= 8",num);
	}
	else{
		printf("%d < 8",num);
	}
	return 0;
}