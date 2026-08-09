//UNCOMMENT FOR THE CODE RUN 


//SAMPLE CODE JUST FOR THE TEST :-
//THIS CODE IS FOR THE ASCII CHAARACTER CONVERSION TO NUMBER:- 
/*
#include <stdio.h>

   int main ()      {

      char ch;

      printf("ENTER YOUR CHARACTER \n");
      scanf("%c",&ch);
 
      printf("YOUR ASCII VALUE OF %c = %d\n",ch,ch);

     return 0;
   }*/





// Write a program to find and display the ASCII value of a given character :-
//PRACTICAL 1

/*
   #include <stdio.h>

   int main ()      {

      int num;

      printf("ENTER YOUR NUMBER HERE:- \n");
      scanf("%d",&num);
 
      printf("YOUR CHARACTER OF %d = %c\n",num,num);

     return 0;
   }           */



// Write a program to convert temperature from Celsius to Fahrenheit :-
//PRACTICAL 2
/*
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
   }              */





// Write a C program to find the sum and average of three numbers :-
//PRACTICAL 3 
/*
   #include <stdio.h>

   int main ()      {

            float a;
            printf("ENTER YOUR A \n");
            scanf("%f",&a);

            float b;
            printf("ENTER YOUR B \n");
            scanf("%f",&b);

            float c;
            printf("ENTER YOUR C \n");
            scanf("%f",&c);

            float add = a+b+c;
            printf("YOUR SUM OF THREE NUMBERS IS = %.2f \n", add);

            float avg  =  (a+b+c)/3;                                          //note here about the BODMAS RULE :-( int avg  = (a+b+c)/3 )
            printf("YOUR AVERAGE OF THREE NUMBERS IS = %.2f \n",avg);

     return 0;
   }    */



//Write a program to calculate simple interest and compound interest :-                 // S.I = p*r*t/100
//PRACTICAL 4                                                                           // C.I =  p * pow((1 + r / 100), t) - p

/*
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
   }     */




//Write a program to swap two numbers using a temporary variable and without using a temporary variable :-
//PRACTICAL 5 
// A- USING TEMPORARY VARIABLE :-

/*                                                                   
#include <stdio.h>                                                 

    int main ()      {                                               

       int a ,b , temp;
       printf("A and B \n");
       scanf ("%d %d", &a ,&b);

       temp = a;
       a=b;
       b=temp;

       printf("AFTER SWAPPING \n");
       printf("A = %d \n",a);
       printf("B = %d \n",b);

     return 0;
   }       */        

   
// B - WITHOUT TEMPORARY VARIABLE :-   
/*
   #include <stdio.h>                                                 

    int main ()      {                                               

       int a ,b ;
       printf("A and B \n");
       scanf ("%d %d", &a ,&b);

       a = a + b;
       b = a - b;
       a = a - b;

       printf("AFTER SWAPPING \n");
       printf("A = %d \n",a);
       printf("B = %d \n",b);

     return 0;
   }          */


//Write a program to calculate the area and circumference/perimeter of a circle, square and rectangle field
//PRACTICAL 6           //area of circle , perimeter of circle            3.14 * r * r ,    2 *3.14 * r
                        //area of square , perimeter of square            side * side  ,    4 * side
                        //area of rectangle , perimeter of rectangle      l * b        ,    2 * (l+b)


/*                        
#include <stdio.h>

     int main ()        {

                      float r , side , l , b , area , perimeter ;

              //circle
              printf("ENTER RADIUS \n");
              scanf("%f",&r);
              area  = 3.14 * r * r , perimeter  = 2 * 3.14 * r ;
            printf("AREA OF CIRCLE = %.2f \n", area);    
            printf("PERIMETER OF CIRCLE = %.2f \n", perimeter);

         //square
         printf("ENTER SIDE \n");
         scanf("%f", &side);
             area = side * side , perimeter = 4*side;
            printf("AREA OF SQUARE = %.2f \n",area);
            printf("PERIMETER OF SQUARE = %.2f \n",perimeter);

         //rectangle
         printf("ENTER LENGTH AND BREADTH \n");
         scanf("%f %f", &l , &b);
             area = l*b , perimeter = 2 * (l+b);
           printf("AREA OF RECTANGLE = %.2f \n",area);
           printf("PERIMETER OF RECTANGLE = %.2f \n",perimeter);

          return 0;
     }       */

   