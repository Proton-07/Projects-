// Write a program to convert temperature from Celsius to Fahrenheit :-
//PRACTICAL 2

   #include <stdio.h>

   int main ()      {
       
       float celcius,fahrenheit;

       //INPUT FOR THE TEMPREATURE IN CELCIUS:-
       printf("ENTER TEMPREATURE IN CELCIUS \n");
       scanf("%f", &celcius);

       //FORMULA FOR THE CELCIUS TO FAHRENHEIT:-
       fahrenheit = ( celcius* 9/5) + 32;

       printf("%.2f celcius = %.2f fahrenheit \n",celcius,fahrenheit );


     return 0;
   }              
