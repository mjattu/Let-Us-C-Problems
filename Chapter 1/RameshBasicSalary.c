// Finding Ramesh Basic Salary

#include<stdio.h>

int main(void)
{
    int bs;
    printf ("Enter Basic Salary\n");
    scanf("%d", &bs);

    int gs = (0.4*bs) + (0.2*bs) + bs ;

    printf("Gross Salary is %d", gs);
    return 0;

}