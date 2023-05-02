#include<stdio.h>
#include<math.h>

int main()
 {
   double start;
   double stop;
   double distance;
   double cost;
   double total_cost;
   
   printf("Enter the start point : ");
   scanf("%lf", &start);
   printf("Entert the end point : ");
   scanf("%lf", &stop);
   printf("Enter cost per km : ");
   scanf("%lf", &cost);
   
   distance = stop - start;
   total_cost = distance*cost;
   
   printf("The total cost is %lf", total_cost);
   return 0;
 }
