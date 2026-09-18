// Write a C program to find the sum and average of three numbers :-
//PRACTICAL 3 

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
   }    
