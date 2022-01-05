//Calculating overtime pay of 10 employees using while loop

#include<stdio.h>

int main()
{
    int hour, pay;

    int i = 1;

    while(i <=10)
    {
        printf("Enter the Total Hours of work done by the Employee Number %d\n", i);
        scanf("%d", &hour);
        
        if(hour >= 40){
            pay = (hour - 40)*12;
            printf("The Overtime pay is Rs %d\n", pay);
        }
        else{
            printf("The Employee worked less than 40 hours\n");
        }

        i = i + 1;

    }
}
    