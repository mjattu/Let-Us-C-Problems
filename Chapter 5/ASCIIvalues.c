//Program to print all the ASCII Values & their equivalent characters

#include<stdio.h>

int main()
{
    int i = 0;

    while(i <=255 )
    {
        char c = i;
        printf("%d   %c\n",i,c);
        i=i+1;
    }
}