#include<stdio.h>
#include<math.h>

int main()
 {
   double vol;
   double time;
   double infused_rate;
   double t;
   
   printf("Enter the volume of input(ml) : ");
   scanf("%lf", &vol);
   printf("Enter the time(mins) : ");
   scanf("%lf", &time);
   
   t = (time/60);
   infused_rate = (vol/t);
   
   
   printf("The infused rate is %lf ml/hr", infused_rate);
   return 0;
}
