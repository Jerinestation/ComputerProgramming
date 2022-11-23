#include <stdio.h>

void print_id_card(char name[], char food[], char color[]);
char name[20],food[20],color[20];

int main()
{
    printf("Enter name, color, food : ");
    scanf("%s %s %s", &name,&color,&food);
    print_id_card(name,color,food);

}
void print_id_card(char name[], char color[], char food[])
{
int i;
    for(i=0; i<22; i++)
    {
        printf("=");
    }
    printf("\n");
    printf("| ");printf("%-18s",name);printf(" |\n");
    printf("| ");
    for (i=1; i<19; i++)
    {
        printf("-");
    }
    printf(" |\n");
    printf("| ");printf("Color : %-10s",color);printf(" |\n");
    printf("| ");printf("Food  : %-10s",food);printf(" |\n");
    for(i=0; i<22; i++)
    {
        printf("=");
    }
}
