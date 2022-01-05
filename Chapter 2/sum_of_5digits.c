//Sum of a 5 digit number

#include<stdio.h>

int main(void)
{
    char a,b,c,d,e;
    
    printf("Enter the 5-digit Number\n");
    scanf("%c %c %c %c %c", &a, &b,&c, &d, &e);

    int sum = (a+b+c+d+e);
    printf("The Sum of all the digits is %d", sum);
}