#include <stdio.h> 
int main() {

float radius = 7.5;
float pi = 3.14;

float dimeter=radius*2;
float circumference = 2*pi*radius;
float area = pi*radius*radius;
printf("================CIRCLE GEOMETRY REPORT===================");
printf("Gven Radius:\t%.3f\n",radius);
printf("Calculated Dimeter:\t%.3f\n",dimeter);
printf("Calculated circumfernce:%.3f\n",circumference);
printf("Calculated Area:\t%.3f\n",area);

printf("===========================================================");

return 0;
}
