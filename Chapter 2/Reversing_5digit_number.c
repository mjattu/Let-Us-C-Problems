//Reversing a 5 digit number

#include<stdio.h>

int main(void)
{
    char a,b,c,d,e;
    
    printf("Enter the 5-digit Number\n");
    scanf("%c %c %c %c %c", &a, &b,&c, &d, &e);

    printf("The Reverse of the number is %c%c%c%c%c",e,d,c,b,a);
}