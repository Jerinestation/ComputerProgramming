#include <stdio.h>
int main(){
	int num,count;
		printf("Enter size of rectangle : ");
	scanf("%d",&num);
	if(num>1){
	for(count = 1;count <=num;count++)
	{	printf("*");}
	int u = 1;
	while(u<=num-2){
	  printf("\n*");
	   for(count = 1;count <=num-2;count++)
	{  printf(" ");}
   	   printf("*");
	u++;}
	printf("\n");
	for(count = 1;count <=num;count++)
	{	printf("*");}}
	else if(num==1){
printf("*");}
else{
	printf("This is impossiple!");
}


		
		
	return 0 ;
}
