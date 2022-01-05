//Finding the distance between two places on earth using nautical miles.

#include<stdio.h>
#include<math.h>

int main(void)
{
    float l1,l2,g1,g2;

    printf("The values of Latitude in degress (L1,L2)\n");
    scanf(" %f , %f", &l1, &l2);

    printf("The values of Longitude in degress (G1,G2)\n");
    scanf(" %f , %f", &g1, &g2);

    float d = 3963 * acos( ( sin(l1) * sin(l2) ) + (cos(l1) * cos(l2) * cos(g2-g1) ));

    printf("The distance between them in nautical miles is %.2f", d);
}

