//program to calculate the smallest number of notes that will combine to give N Rs

#include<stdio.h>

int main()
{
   int num;

   printf("Enter the sum amount in Rs ");
   scanf("%d", &num);

   int ten,one,two,five,hundred,fifty;

   hundred = num /100;
   fifty = (num%100)/50;
   ten = (num%50)/10;
   five = (num%10)/5;
   two = (num%5)/2;
   one = (num%2)/1;


   printf(" No. of Rs 100 Notes is %d\n", hundred);
   printf(" No. of Rs 50 Notes is %d\n", fifty);
   printf(" No. of Rs 10 Notes is %d\n", ten);
   printf(" No. of Rs 5 Notes is %d\n", five);
   printf(" No. of Rs 2 Notes is %d\n", two);
   printf(" No. of Rs 1 Notes is %d\n", one);
   
   int total = hundred + fifty + ten + five + two + one;
   printf("\n\n Total No. minimum Notes is %d\n", total);
   
}