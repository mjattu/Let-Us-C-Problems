#include <stdio.h>

int main()
{
    int input;
    for (;;)
    {
        printf("Enter the number\n");
        scanf("%d", &input);

        int pos = 0, neg = 0, zero = 0;

        if (input == 0)
        {
            zero = zero + 1;
        }
        else if (input < 0)
        {
        }
        else if (input > 0)
        {
            pos = pos + 1;
        }
        printf(" Positive Numbers Entered: %d \n", pos);
        printf(" Negative Numbers Entered: %d \n", neg);
        printf(" Zeroes Entered: %d \n", zero);
    }
}