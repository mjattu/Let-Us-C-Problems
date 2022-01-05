//Program to receive value in degree and check the sin + cos of that degree = 1 or not

#include<stdio.h>
#include<math.h>

int main(void)
{
    float angle;

    printf("Enter the value of the angle (in Degrees):  \n");
    scanf("%f", &angle);

    float rad = angle * ( M_PI / 180.0 );
    float sum = pow(sin(rad),2) + pow(cos(rad),2);

    ( sum == 1) ? printf("Sum of squares of sine & cosine of this angle is 1") : printf("Sum of squares of sine & cosine of this angle is NOT 1");  
}