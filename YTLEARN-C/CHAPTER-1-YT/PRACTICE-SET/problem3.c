//CODE TO FIND THE VOLUME OF CYLINDER BY USER INPUT :-

#include <stdio.h>

int main(){
            float r ,h , volume;

            printf("ENTER RADIUS \n"  );
            scanf("%f" , &r);

            printf("ENTER HEIGHT \n");
            scanf ("%f" , &h);

            //FORMULA TO CALCULATE THE VOLUME OF THE CYLINDER 
            volume = 3.14*r*r*h;

            printf("VOLUME OF THE CYLINDER : %f" , volume);
    return 0;
}