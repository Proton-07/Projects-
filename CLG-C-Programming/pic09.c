// PRACTICAL 9
// Write a program to find the largest of two numbers using if.   
           
               #include <stdio.h>
                        int main ()      {

                                   int a,b;
                                   printf("Enter A and B \n");
                                   scanf("%d %d" , &a , &b);

                                   if (a > b)
                                   {
                                    printf("LARGEST NUMBER IS A = %d \n",a);
                                   }

                                   else if (b > a)
                                   {
                                    printf("LARGEST NUMBER IS B = %d \n",b);
                                   }
                                   else 
                                   {
                                   printf("BOTH NUMBERS ARE EQUAL THUS CAN'T TELL WHICH IS THE GREATEST NUMBER \n");
                                   }

                           return 0;
                        }                        


