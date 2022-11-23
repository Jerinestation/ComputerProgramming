#include<stdio.h>

int main() {

    char str[100],*p_left, *p_right;

    printf(" *** Palindrome Verification ***\n");

    printf("Enter a sentence : ");

    scanf("%[^\n]",str);

    for(p_right=str; *p_right!='\0';p_right++);{
    if(*p_right >=65 && *p_right <= 90)
        *p_right = *p_right +32;
    p_right--;
    }

    for(p_left=str; p_left<p_right; p_left++,p_right--)
    {
        if(*p_left >=65 && *p_left <= 90)
        p_left=p_left+32;


      if(*p_left!=*p_right)
        break;

    }

    if (p_left < p_right) {

        printf("\"%s\" is NOT palindrom.\n",str);

    }
    else {
        printf("\"%s\" is PALINDROME.\n",str);


    }



 return 0;

}
