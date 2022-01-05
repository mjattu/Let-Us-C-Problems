#include<stdio.h>

int main(void)
{
    int year;

    printf("Enter the Year: \n");
    scanf("%d", &year);

    year%4 == 0 ? printf(" The Year is a Leap Year") : printf("The Year is not a Leap Year");
}