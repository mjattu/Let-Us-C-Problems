//Find the greatest of the 3 number by conditional operators

#include<stdio.h>

int main(void)
{
    float x,y,z;

    printf("Enter the three numbers (x,y,z) : \n");
    scanf("%f,%f,%f", &x, &y, &z);

    x>y && x>z ? printf(" The Greatest Number is %.2f",x) : y>x && y>z ? printf(" The Greatest Number is %.2f",y) : printf(" The Greatest Number is %.2f",z); 
}