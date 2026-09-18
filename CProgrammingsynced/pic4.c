//Write a program to calculate simple interest and compound interest :-                 // S.I = p*r*t/100
//PRACTICAL 4                                                                           // C.I =  p * pow((1 + r / 100), t) - p


#include <stdio.h>
#include <math.h>

   int main ()      {

       float p , r, t , si , ci;
       printf("ENTER PRINCIPAL,RATE AND TIME \n");
       scanf("%f %f %f", &p,&r,&t);                                               // REMEMBER THIS LINE NOT USED EARLIER

            //formula for calculating S.I                                      //ALSO USE THE -lm AT LAST OF COMPILATION FOR THE POW 
       si = (p*r*t)/100;
       
            //formula for calculating C.I
       ci = p * pow((1 + r / 100), t) - p;

      printf ("SIMPLE INTEREST ( S.I )= %.2f \n",si);
      printf ("COMPOUND INTEREST ( C.I )= %.2f \n",ci);
      

     return 0;
   }     
