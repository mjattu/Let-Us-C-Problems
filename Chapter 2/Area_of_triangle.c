//Area of a triangle using the length of three sides

#include<stdio.h>
#include<math.h>

int main()
{
    float s1,s2,s3;

    printf("Enter the length of the three sides\n");
    scanf("%f\n %f\n %f", &s1,&s2,&s3);

    float sp = (s1+s2+s3)/2;
    float A = sqrt(sp*(sp-s1)*(sp-s2)*(sp-s3));

    printf("The Area of the triangle is %.2f",A);
}