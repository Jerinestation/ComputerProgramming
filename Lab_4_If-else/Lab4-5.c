#include <stdio.h>
int main() {
   int year;
   printf(" *** Leap year checking ***\n");
   printf("Enter year in BC (1000-3000) : ");
   scanf("%d", &year);
   if(year<1000 || year>3000){
      if(year<1000){
          printf(" %d is NOT in the range (1000-3000)",year);
      }
      else{
         printf("%d is NOT in the range (1000-3000)",year);
      }     
      return 0;
   }
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   else if (year % 100 == 0) {
      printf("%d is a common year.", year);
   }
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   else {
      printf("%d is a common year.", year);
   }
   return 0;
}
