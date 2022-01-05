#include<stdio.h>

int main(void)
{
    char input;

    printf("Enter the Character: \n");
    scanf("%c", &input);

    (input>=0 && input<=47)||(input>=58 && input<=64)||(input>=91 && input<=96)||(input>=123 && input<=127) ? printf(" The Character is a Special Symbol") : printf(" The Character is NOT a Special Symbol");
}