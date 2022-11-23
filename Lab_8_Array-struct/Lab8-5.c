#include<stdio.h>
#define SIZE 10
int main() {
    struct student {
        char id[9];
        char name[40];
        int marking;
    } st[SIZE];
    int i,i_max,i_min,count = 0,num = 1;
    printf(" *** Structure Array 2 ***\n");
   printf("Enter data : ");
    for(i=0;i<SIZE;i++) {
        scanf("%s %s %d",st[i].id,st[i].name,&st[i].marking);
    }
    //make sure whether data is as expected.
    /*
    printf("\nOutput : \n");
    for(i=0;i<SIZE;i++) {
        printf("%s %s %d\n",st[i].id,st[i].name,st[i].marking);

    }
    */
    i_max=0;
    for(i=0; i<SIZE; i++)
    {
        if(i+1<SIZE)
        {
            if(st[i].marking > st[i+1].marking){
                    if(st[i].marking > st[i_max].marking){
                        i_max = i;
                    }
            }
            else{
                    if(st[i+1].marking > st[i_max].marking){
                            i_max = i+1;
                    }
            }
        }
    }
    for ( i = 0; i < SIZE; i++)
    {
        if(st[i].marking == st[i_max].marking)
        {
            count++;
        }
    }
    printf("\n\n *** Analyzing Data ***\n");
    printf("Max marking   = %d points, %d students.\n",st[i_max].marking,count);
    for ( i = 0; i < SIZE; i++){
        if (st[i].marking == st[i_max].marking){
            printf("%d. %s %s %d\n",num,st[i].id,st[i].name,st[i].marking);
            num++;
        }
    }
    return 0;

}
