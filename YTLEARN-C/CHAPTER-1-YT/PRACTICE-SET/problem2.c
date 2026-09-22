// CODE TO FIND THE AREA OF THE CIRCLE BY USER INPUT :-

#include <stdio.h>

int main(){
            float r , area;
            printf("ENTER THE RADIUS \n "); 
            scanf("%f" , &r);

       //Formula to find the area of the circle     
        area = 3.14*r*r ;


            printf("AREA OF THE CIRCLE : %f" , area);
    return 0;
}