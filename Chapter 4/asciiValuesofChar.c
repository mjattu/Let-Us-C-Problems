//Determining the character.

#include<stdio.h>

int main(void)
{
    char input;

    printf("Enter the Character:  ");
    scanf("%c", &input);

    if(input>=65 && input<=90){
        printf("The Character is a Capital Letter");
    }
    
    if(input>=97 && input<=122){
        printf("The Character is a Small Letter");
    }

    if(input>=48 && input<=57){
        printf("The Character is a Digit");
    }

    if((input>=0 && input<=47)||(input>=58 && input<=64)||(input>=91 && input<=96)||(input>=123 && input<=127)){
        printf("The Character is a Symbol");
    }

}