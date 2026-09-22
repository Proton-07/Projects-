#include <stdio.h>

int main(){

// int and int ⇉ int
// int and float ⇉ float
// float and float ⇉ float     

            float a = 90;
            int b = 6;
            float c = a/b;
            int d = 7.23;

            printf("THE VALUE OF A/B IS : %f \n" , c);
            printf("THE VALUE OF D IS = %d" , d);  // DOESN'T PRINTS D AS 7.23 AS IT GETS DEMOTED AFTER THE DECIMAL VALUE  

    return 0;
}
