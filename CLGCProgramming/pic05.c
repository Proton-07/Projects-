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
   }          
