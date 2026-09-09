// PRACTICAL 7
// Program  to find the sum of individual digits of a given positive integer.

/*
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
}                 */

                               

// PRACTICAL 8
// Program to find the roots of the quadratic equation.
/*
#include <stdio.h>
#include <math.h>

     int main ()        {

             int a,b,c;
             printf("Enter a,b,c \n ");
             scanf("%d %d %d", &a,&b,&c);

             //STANDARD WAY OF WRITING QUADRATIC EQUATION:-
              //a*x^2 + b*x + c    

              if (a == 0) {
                 printf("THIS IS NOT A QUADRATIC EQUATION \n");
                return 0;
              } 

              //FORMULA TO FIND THE QUADRATIC ROOTS:-
               float d = (b * b) - (4 *a *c) ;

               if ( d < 0 )  {
                  printf("no real roots exists");
                  return 0;
               }

               else
                {   

               float X1 = ( -b  +  sqrt (d)) / (2*a);
               float X2 = ( -b  -  sqrt (d)) / (2*a);

               printf(" ROOTS ARE = %.2f and %.2f \n",X1 , X2);
                  return 0;
               }   


                  return 0;
               }                          */




// PRACTICAL 9
// Write a program to find the largest of two numbers using if.              
               #include <stdio.h>
                        int main ()      {

                                   int a,b;
                                   printf("Enter A and B \n");
                                   scanf("%d %d" , &a , &b);

                                   if (a > b)
                                   {
                                    printf("LARGEST NUMBER IS A = %d \n",a);
                                   }

                                   else if (b > a)
                                   {
                                    printf("LARGEST NUMBER IS B = %d \n",b);
                                   }
                                   else 
                                   {
                                   printf("BOTH NUMBERS ARE EQUAL THUS CAN'T TELL WHICH IS THE GREATEST NUMBER \n");
                                   }

                           return 0;
                        }










   
     