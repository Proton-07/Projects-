#include <stdio.h>

  
        int max (int a , int b )
                
           {
             return (( a > b) ?  printf ("a is bigger"): printf ("b is bigger"));
           }
           int main ()   {
             int a,b;

             printf("ENTER A and B \n:");
             scanf("%d %d" , &a ,&b);

             max (a,b);

             return 0;
           }
        


       