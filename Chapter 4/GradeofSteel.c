//Determining the grade of steel from its values.

#include<stdio.h>

int main(void)
{
    float hard,cc,ts;

    printf("Enter the hardness of Steel: \n");
    scanf("%f", &hard);

    printf("Enter the Carbon Content of Steel: \n");
    scanf("%f", &cc);

    printf("Enter the Tensile Strength of Steel: \n");
    scanf("%f", &ts);

    if (hard>50 && cc<0.7 && ts>5600)
    {
        printf("The Steel is of GRADE 10");
    }
    else if (hard>50 && cc<0.7)
    {
        printf("The Steel is of GRADE 9");
    }
    else if (cc<0.7 && ts>5600)
    {
        printf("The Steel is of GRADE 8");
    }
    else if (hard>50 && ts>5600)
    {
        printf("The Steel is of GRADE 7");
    }
    else if (hard>50 || cc<0.7 || ts>5600)
    {
        printf("The Steel is of GRADE 6");
    }
    else if (!(hard>50 || cc<0.7 || ts>5600))
    {
        printf("The Steel is of GRADE 5");
    }
}