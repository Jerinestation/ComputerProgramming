#include <stdio.h>
int main(){
 int num,count,u=9,o = 1;
  printf("input (1-20)  : ");
 scanf("%d",&num);
 if(num<21 && num >0){
  printf("\n");
  while(o <= num){
  for(count = 1;count <= num;count++){
     printf("  %d",u);
     u--;
     if (u<1){
     u = 9;}
      }
    printf("\n");
    o++;}
  }
    else{
     printf("\nNo Answer");
 }

 return 0 ;
}