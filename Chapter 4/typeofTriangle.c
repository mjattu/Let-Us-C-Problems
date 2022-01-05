//Determining the type of triangle from it 3 sides

#include<stdio.h>

int main(void)
{
    float x,y,z;

    printf("Enter the length of the 3 sides of a triangle (x,y,z) : \n ");
    scanf("%f,%f,%f",&x,&y,&z);

    if( (x==y && x!=z && y!=z) || (y==z && y!=x && z!=x) || (z==x && z!=y && x!=y) )
        printf("The Triangle is Isosceles Triangle\n");

    if(x==y && x==z && y==z)
        printf("The Triangle is Equilateral Triangle\n");

    if(x!=y && x!=z && y!=z)
        printf("The Triangle is Scalene Triangle\n");

    if(x*x+y*y==z*z || y*y+z*z==x*x || z*z+x*x==y*y)
        printf("The Triangle is Right Angled Triangle\n");





}