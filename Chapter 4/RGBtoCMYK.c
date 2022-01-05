//Converting RBG Values to CMYK values

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
    float  red,green,blue;
    float white, black, cyan,magenta,yellow,k, max;

    printf("Enter the values of RGB (x,y,z) :\n");
    scanf("%f,%f,%f", &red, &green, &blue);
    
    if(red==0 && green==0 && blue==0){
        cyan = 0, magenta = 0, yellow = 0, k = 1;
        printf("CMYK = 0,0,0,1");
    }
    else{
        red = red/255;
        green = green/255;
        blue = blue/255;

        max = red;
            if(green > red && green >blue)
                max = green;
            if(blue > green && blue > red)
                max = blue;
    
        white = max;
        cyan = (white - red)/white;
        magenta = (white - green)/white;
        yellow = (white - blue)/white;
        black = 1 - white;

        printf("CMYK = %.2f,%.2f,%.2f,%.2f", cyan,magenta,yellow,black);
    }
    
}