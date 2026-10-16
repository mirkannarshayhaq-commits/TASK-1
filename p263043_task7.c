#include <stdio.h>
int main() {


float vi=12.5;
float a=3.2;
float t=6.0;
float vf=vi+a*t;
float s=vi*t+0.5*a*t*t;
printf("==============KINAMATICS REPORT=============\n");
printf("Initial Velocity:\t%.2fm/s\n",vi);
printf("Acceleration:\t\t%.2fm/s*s\n",a);
printf("Time Elapsed:\t\t%.2fs\n",t);
printf("____________________________________________\n");
printf("Calculated Final Velocity:%.2fm/s\n",vf);
printf("Calulated distance:\t%.2fm\n",s);
printf("================================================");






return 0;
}