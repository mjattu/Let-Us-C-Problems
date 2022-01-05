//Calculating BMI by taking height & weight as input

#include<stdio.h>

int main(void)
{
    float height, weight;

    printf("Enter the Height (in metres): \n");
    scanf("%f", &height);

    printf("Enter the Weight (in Kilograms): \n");
    scanf("%f", &weight);

    float bmi = weight / (height*height);

    if (bmi < 15)
    {
        printf("BMI is %.2f\n",bmi);
        printf("BMI Category : Starvation\n");
    }
    if (bmi >= 15.1 && bmi <= 17.5)
    {
        printf("BMI is %.2f\n",bmi);
        printf("BMI Category : Anorexic\n");
    }
    if (bmi >= 17.6 && bmi <= 18.5)
    {
        printf("BMI is %.2f\n",bmi);
        printf("BMI Category : Underweight\n");
    }
    if (bmi >= 18.6 && bmi <= 24.9)
    {
        printf("BMI is %.2f\n",bmi);
        printf("BMI Category : IDEAL\n");
    }
    if (bmi >= 25 && bmi <= 25.9)
    {
        printf("BMI is %.2f\n",bmi);
        printf("BMI Category : Overweight\n");
    }
    if (bmi >= 30 && bmi <= 30.9)
    {
        printf("BMI is %.2f\n",bmi);
        printf("BMI Category : Obese\n");
    }
    if (bmi >= 40)
    {
        printf("BMI is %.2f\n",bmi);
        printf("BMI Category : Morbidly Obese\n");
    }
    
    
    
    
    

}