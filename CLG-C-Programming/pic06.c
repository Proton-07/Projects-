//Write a program to calculate the area and circumference/perimeter of a circle, square and rectangle field
//PRACTICAL 6           //area of circle , perimeter of circle            3.14 * r * r ,    2 *3.14 * r
                        //area of square , perimeter of square            side * side  ,    4 * side
                        //area of rectangle , perimeter of rectangle      l * b        ,    2 * (l+b)


                        
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
     }       

