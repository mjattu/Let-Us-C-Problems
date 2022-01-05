// Calculating Area  & Perimeter of the Rectangle & Area-Circumference of Cicle

#include<stdio.h>

int main(void)
{
    float len,bre,rad;

    printf(" Enter the Length of the Rectangle\n");
    scanf("%f", &len);

    
    printf(" Enter the Breadth of the Rectangle\n");
    scanf("%f", &bre);

    
    printf(" Enter the Radii of the circle\n");
    scanf("%f", &rad);

    float aor,por,aoc,coc;

    aor = len * bre;
    por = 2*(len + bre);
    aoc = 3.14*rad*rad;
    coc = 2*3.14*rad;

    printf("\n The Area of the Rectangle is %.2f\n The perimeter of the rectangle %.2f\n\n", aor, por);
    printf(" The Area of the Circle is %.2f\n The Circumference of the Circle is %.2f", aoc,coc);
}