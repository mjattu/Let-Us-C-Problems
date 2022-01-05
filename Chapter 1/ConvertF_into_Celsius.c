//Converting temperature from Fahreinheit to Celsius.

#include<stdio.h>

int main(void)
{
    float fah,centi;

    printf("Enter the Temperature in Fehreinheit\n");
    scanf("%f",&fah);

    centi = (fah-32)*0.5556;

    printf("The Temperature in Celsius is %.2f",centi);


}