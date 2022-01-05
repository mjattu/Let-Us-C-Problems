//Finding Trigonometric Ratios of an angle

#include<stdio.h>
#include<math.h>

int main(void)
{
    int ang, deg;

    printf("Enter the value of the angle (in degrees)\n");
    scanf("%d", &deg);

    ang = (deg * 3.14)/180 ;

    float sine,cosine,tang,seca,coseca,cotang;
    sine = sin(ang);
    cosine = cos(ang);
    tang = tan(ang);
    seca = 1/cosine;
    coseca = 1/sine;
    cotang = 1/tang;

    printf("The values of Trigonometric Ratios are\n");
    printf("sin(%d) = %.2f\n", deg,sine);
    printf("cos(%d) = %.2f\n", deg,cosine);
    printf("tan(%d) = %.2f\n", deg,tang);
    printf("sec(%d) = %.2f\n", deg,seca);
    printf("cosec(%d) = %.2f\n", deg,coseca);
    printf("cot(%d) = %.2f\n", deg,cotang);
}