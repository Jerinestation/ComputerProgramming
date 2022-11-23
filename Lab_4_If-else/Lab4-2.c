#include "stdio.h"

void bubbleSort(int array[], int size) {
  for (int step = 0; step < size - 1; ++step) {
    int swapped = 0;
    for (int i = 0; i < size - step - 1; ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        
        swapped = 1;
      }
    }
    if (swapped == 0) {
      break;
    }
  }
}

int main(){
	printf(" *** Find (Minimum + Maximum) / Middle ***\n");
	printf("Enter 3 integers : ");
	int num1,num2,num3;
	scanf("%d %d %d",&num1,&num2,&num3);
	int numArr[] = {num1,num2,num3};
	bubbleSort(numArr,3);
	printf("(Min + Max) / Mid = (%d + %d) / %d = %.4f",numArr[0],numArr[2],numArr[1],(float)(numArr[0]+numArr[2])/numArr[1]);
	return 0;
}