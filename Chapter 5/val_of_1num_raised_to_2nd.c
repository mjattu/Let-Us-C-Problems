//Calculating the value of one number raised to the other number.

#include<stdio.h>
#include<math.h>

int main()
{
    int first, second;

    printf("Enter the first number:  \n");
    scanf("%d", &first);

    printf("Enter the second number:  \n");
    scanf("%d", &second);

    int f_top_s = pow(first,second);
    int s_top_f = pow(second,first);

    printf("The value of %d raised to the power %d is : %d\n", first,second,f_top_s);
    printf("The value of %d raised to the power %d is : %d\n", second,first,s_top_f);
}