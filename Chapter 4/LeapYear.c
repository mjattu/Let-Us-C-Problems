#include<stdio.h>

// finding leap year using logical operators

int main(void)
{
    int year;

    printf("Enter the Year:  \n");
    scanf("%d",&year);

    if(year%4 == 0){
        printf("The Year is Leap Year");
    }
    else{
        printf("The Year is NOT a Leap Year");
    }

    
}