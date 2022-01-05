//Calculating the Wind Chilled Factor

#include<stdio.h>
#include<math.h>

int main=(void)
{
    float temp, wv, wcf;
    printf("Enter the Temperature  ");
    scanf("%f", &temp);

    printf("Enter the Wind Velocity  ");
    scanf("%f", &wv);

    wcf = 35.74 + 0.6215*temp + (0.4275*temp - 35.75) * pow(wv,0.16);

    printf("The Wind Chill Factor (wcf) is  %.2f", wcf);

}