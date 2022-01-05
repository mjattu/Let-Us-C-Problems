//Converting from cartesian point to coplanar point

#include<stdio.h>
#include<math.h>

int main(void)
{
    float x,y;
    
    printf("Enter the Cartesian Cordinates (X,Y)\n");
    scanf("%f,%f", &x,&y);

    float r,o;
    r = sqrt(x*x + y*y);
    o = atan(y/x);

    printf("The Polar Coordinates are\n (%.2f , %.2f)",r,o);

}