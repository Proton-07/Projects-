// PRACTICAL 7
// Program  to find the sum of individual digits of a given positive integer.


#include <stdio.h>

     int main ()        {

             int num, digit ,sum = 0;
             printf("ENTER A POSITIVE INTEGER: \n");
             scanf("%d",&num);

             while (num > 0)
             {
              digit = num % 10;
              sum = sum + digit;
              num = num/10;
            }
 
            printf("SUM OF INDIVIDUAL DIGITS ARE =  %d \n" , sum );

                return 0;
}                                     
