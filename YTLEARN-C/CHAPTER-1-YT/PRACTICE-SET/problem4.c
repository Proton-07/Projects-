// CODE TO CONVERT THE CELCIUS TO FAHRENHEIT BY USER INPUT :-

#include <stdio.h>

int main()
{
    float c, f;

    printf("ENTER TEMPREATURE IN CELCIUS \n");
    scanf("%f", &c);

    // formula for conversion of tempreature from celcius to fahrenheit
    f = ((9.0 / 5.0) * c) + 32;

    printf("TEMPREATURE IN FAHRENHEIT : %.2f", f);
     
    return 0;
}