#include<stdio.h>
void tree3(int x)
{
  int row=0,left=0,right=0;
    int limit=x,text='A';
    while(x>0){
        row++;
        x-=row;

        if(row==1);
        else if(row==2)left--;
        else if(row%2==1 && x>=0)right+=2;
        else if(row%2==0 && x>=0)left-=2;
    }
    //printf("%d %d %d",left,right,(right-left));

    x=0;
    for(int i=1 ; i<=row ; i++){

        if(i%2==0){
            if(x+i<=limit) text+=i-1;
            else if(x+i>limit) text+=(limit-x-1);
            if(text>'Z') text = (text-'Z')+'A'-1 ;
        }

        for(int j=left ; j<=right ; j++){
            if(i%2==1 && 0<=j && j<i && x<limit){
                printf("%c",text);
                text++;
                x++;
                if(text>'Z') text = 'A' ;
            }
            else if(i%2==0 && -i<j && j<=0 && x<limit && x-j+1<=limit)
            {
                printf("%c",text);
                text--;
                x++;
                if(text<'A') text = 'Z' ;
            }
        else printf(".");
        }

        if(i%2==0){
            text+=i+1;
            if(text>'Z') text = (text-'Z')+'A'-1 ;
        }
        printf("\n");
    }
}

int main()
{
    int num;
    printf("Enter positive number : ");
    scanf("%d", &num);
    if (num>1)
    {
        tree3(num);
    }
    else if (num==1)
    {
        printf("A");
    }
    else
    {
        printf("Out of range --> %d", num);
    }
    return 0;
}
