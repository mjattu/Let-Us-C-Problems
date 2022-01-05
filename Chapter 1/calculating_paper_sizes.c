// A program to calculate and print paper sizes.

#include<stdio.h>

int main(void)
{
    int l,b;
    l = 1189, b = 841;

    
    printf("The Paper size of A0 is %dmm x %dmm \n", l,b);
    
    int a1l, a1b;
    a1l=b, a1b=l/2;
    printf("The Paper size of A1 is %dmm x %dmm \n", a1l,a1b);

    int a2l, a2b;
    a2l=a1b, a2b=a1l/2;
    printf("The Paper size of A2 is %dmm x %dmm \n", a2l,a2b);

    int a3l, a3b;
    a3l=a2b, a3b=a2l/2;
    printf("The Paper size of A3 is %dmm x %dmm \n", a3l,a3b);

    int a4l, a4b;
    a4l=a3b, a4b=a3l/2;
    printf("The Paper size of A4 is %dmm x %dmm \n", a4l,a4b);

    int a5l, a5b;
    a5l=a4b, a5b=a4l/2;
    printf("The Paper size of A5 is %dmm x %dmm \n", a5l,a5b);

    int a6l, a6b;
    a6l=a5b, a6b=a5l/2;
    printf("The Paper size of A6 is %dmm x %dmm \n", a6l,a6b);

    int a7l, a7b;
    a7l=a6b, a7b=a6l/2;
    printf("The Paper size of A7 is %dmm x %dmm \n", a7l,a7b);

    int a8l, a8b;
    a8l=a7b, a8b=a7l/2;
    printf("The Paper size of A8 is %dmm x %dmm \n", a8l,a8b);
    
        
    
        

    

    
}