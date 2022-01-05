#include<stdio.h>

int main(void)
{
    char input;

    printf("Enter the Character: \n");
    scanf("%c", &input);

    input>=97 && input<=122 ? printf(" The Character is Lower Case Alphabet") : printf(" The Character is NOT a Lower Case Alphabet");
}