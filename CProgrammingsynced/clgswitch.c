#include <stdio.h>

    int main () {
        int a ;
        printf("Enter your no =");
        scanf ("%d", &a);

        switch (a) {

            case 0 :
              printf ("the no is 0");
              
            case 1 :
              printf("the no is 1");
              
             default :
              printf("The no is either 0 nor 1 ");
               
                break;
          }

          return 0;
    }