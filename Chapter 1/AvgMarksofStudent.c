// Aggregreate marks and percentage marks obtained by a student.

#include<stdio.h>

int main(void)
{
    float fs,ss,ts,fos,fis;

    printf("Enter Marks obtained in First Subject\n");
    scanf("%f", &fs);

    printf("Enter Marks obtained in Second Subject\n");
    scanf("%f", &ss);

    printf("Enter Marks obtained in Third Subject\n");
    scanf("%f", &ts);

    printf("Enter Marks obtained in Fourth Subject\n");
    scanf("%f", &fos);

    printf("Enter Marks obtained in Fifth Subject\n");
    scanf("%f", &fis);

    float agg,per;
    agg = fs+ss+ts+fos+fis;
    per = agg/5;

    printf("Aggregeate Marks is %.2f & Percentage Marks is %.2f\n",agg, per);


    
}