//Checking whether a triangle is valid or not by its length of three sides

#include<stdio.h>

int main(void)
{
    float x,y,z;

    printf("Enter the length of the 3 sides of a triangle (x,y,z) : \n ");
    scanf("%f,%f,%f",&x,&y,&z);

    if( (x+y>z) && (y+z>x) && (x+z>y) ) {
        printf("The Triangle is VALID");
    }
    else{
        printf("The Triangle is NOT VALID");
    }
}