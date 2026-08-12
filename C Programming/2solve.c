#include <stdio.h>
#include <math.h>

     int main ()        {

             int a,b,c;
             printf("Enter a,b,c \n ");
             scanf("%d %d %d", &a,&b,&c);

             /*STANDARD WAY OF WRITING QUADRATIC EQUATION:-
              a*x^2 + b*x + c    */

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
               }










   
     