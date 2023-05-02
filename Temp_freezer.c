#include<stdio.h>
#include<math.h>

int main()
 {
   double t;
   double T;
   
   printf("Enter the time elapsed from power failure : ");
   scanf("%lf", &t);
   
   T = ((4*(t*t))/(t+2))-20;
   
   printf("The temperature in freezer is %lf", T);
   return 0;
   
}   
