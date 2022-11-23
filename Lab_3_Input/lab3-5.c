#include "stdio.h"
#include "string.h"

int main(){
	int number;
	printf("Enter magic number : ");
	scanf("%d",&number);
	printf("+1\t: %d\n",number+1);
	printf("-1\t: %d\n",number-1);
	printf("First 3	: %d\n",number/1000);
	printf("Last 3	: %d\n",number%1000);
	return 0;
}
