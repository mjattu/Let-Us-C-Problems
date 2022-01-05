// Printing all the Armstrong Numbers between 1 & 500.

#include<stdio.h>

int main()
{
    int i = 1;
    while(i <=500)
    {
        int a,b,c,d;
        a = i/100;
        b = (i%100)/10;
        c = (i%100)%10;
        d = (a*a*a) + (b*b*b) + (c*c*c);

        if(i == d)
            printf("%d\n", i);
        i = i + 1;
    }





}