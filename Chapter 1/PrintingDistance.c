// Printing distance in metres, feet, inhes, cm;

#include<stdio.h>

int main(void)
{
    float dis;
    printf("Enter the distance in Km\n");
    scanf("%f", &dis);

    float m, ft, inch, cm ;
    m = dis * 1000;
    ft = dis * 3280.84;
    inch = dis * 39370.1;
    cm = dis * 100000;

    printf(" The Distance in Metres is %.2f m\n",m);
    printf(" The Distance in Feet is %.2f ft\n",ft);
    printf(" The Distance in Inches is %.2f in\n",inch);
    printf(" The Distance in Centimetres is %.2f cm\n",cm);

            
            
     
}