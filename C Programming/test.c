// CODE OF ASSIGN INT AND USING TYPECASTING AND GIVING SEGMENTATION FAULT( CORE DUMPED )  
#include <stdio.h>
        int main()  {

            int x = 10;

          int *ptr = (int *)x;    
          //typecasting integer as pointer

        printf("%d", *ptr);
// Invalid memory access
        
            return 0;
        }         

        